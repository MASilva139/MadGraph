#include "SampleAnalyzer/User/Analyzer/user.h"
using namespace MA5;

MAbool user::Initialize(const MA5::Configuration& cfg,
                      const std::map<std::string,std::string>& parameters)
{
  // Initializing PhysicsService for MC
  PHYSICS->mcConfig().Reset();

  // definition of the multiparticle "hadronic"
  PHYSICS->mcConfig().AddHadronicId(-5);
  PHYSICS->mcConfig().AddHadronicId(-4);
  PHYSICS->mcConfig().AddHadronicId(-3);
  PHYSICS->mcConfig().AddHadronicId(-2);
  PHYSICS->mcConfig().AddHadronicId(-1);
  PHYSICS->mcConfig().AddHadronicId(1);
  PHYSICS->mcConfig().AddHadronicId(2);
  PHYSICS->mcConfig().AddHadronicId(3);
  PHYSICS->mcConfig().AddHadronicId(4);
  PHYSICS->mcConfig().AddHadronicId(5);
  PHYSICS->mcConfig().AddHadronicId(21);

  // definition of the multiparticle "invisible"
  PHYSICS->mcConfig().AddInvisibleId(-16);
  PHYSICS->mcConfig().AddInvisibleId(-14);
  PHYSICS->mcConfig().AddInvisibleId(-12);
  PHYSICS->mcConfig().AddInvisibleId(12);
  PHYSICS->mcConfig().AddInvisibleId(14);
  PHYSICS->mcConfig().AddInvisibleId(16);

  // ===== Signal region ===== //
  Manager()->AddRegionSelection("myregion");

  // ===== Selections ===== //

  // ===== Histograms ===== //
  Manager()->AddHisto("1_THT", 40,0.0,500.0);
  Manager()->AddHisto("2_MET", 40,0.0,500.0);
  Manager()->AddHisto("3_SQRTS", 40,0.0,500.0);
  Manager()->AddHisto("4_PT", 40,0.0,500.0);
  Manager()->AddHisto("5_ETA", 40,-10.0,10.0);
  Manager()->AddHisto("6_PT", 40,0.0,500.0);
  Manager()->AddHisto("7_ETA", 40,-10.0,10.0);
  Manager()->AddHisto("8_M", 40,0.0,500.0);
  Manager()->AddHisto("9_DELTAR", 40,0.0,10.0);

  // No problem during initialization
  return true;
}

MAbool user::Execute(SampleFormat& sample, const EventFormat& event)
{
  MAfloat32 __event_weight__ = 1.0;
  if (weighted_events_ && event.mc()!=0) __event_weight__ = event.mc()->weight();

  if (sample.mc()!=0) sample.mc()->addWeightedEvents(__event_weight__);
  Manager()->InitializeForNewEvent(__event_weight__);

  // Clearing particle containers
  {
      _P_zp_I1I_PTorderingfinalstate_REG_.clear();
      _P_zp_I2I_PTorderingfinalstate_REG_.clear();
      _P_zpPTorderingfinalstate_REG_.clear();
  }

  // Filling particle containers
  {
    for (MAuint32 i=0;i<event.mc()->particles().size();i++)
    {
      if (isP__zpPTorderingfinalstate((&(event.mc()->particles()[i])))) _P_zpPTorderingfinalstate_REG_.push_back(&(event.mc()->particles()[i]));
    }
  }

  // Sorting particles
  // Sorting particle collection according to PTordering
  // for getting 1th particle
  _P_zp_I1I_PTorderingfinalstate_REG_=SORTER->rankFilter(_P_zpPTorderingfinalstate_REG_,1,PTordering);

  // Sorting particle collection according to PTordering
  // for getting 2th particle
  _P_zp_I2I_PTorderingfinalstate_REG_=SORTER->rankFilter(_P_zpPTorderingfinalstate_REG_,2,PTordering);

  // Histogram number 1
  //   * Plot: THT
  {
    Manager()->FillHisto("1_THT", PHYSICS->Transverse->EventTHT(event.mc()));
  }

  // Histogram number 2
  //   * Plot: MET
  {
    Manager()->FillHisto("2_MET", PHYSICS->Transverse->EventMET(event.mc()));
  }

  // Histogram number 3
  //   * Plot: SQRTS
  {
    Manager()->FillHisto("3_SQRTS", PHYSICS->SqrtS(event.mc()));
  }

  // Histogram number 4
  //   * Plot: PT ( zp[1] ) 
  {
  {
    MAuint32 ind[1];
    for (ind[0]=0;ind[0]<_P_zp_I1I_PTorderingfinalstate_REG_.size();ind[0]++)
    {
      Manager()->FillHisto("4_PT", _P_zp_I1I_PTorderingfinalstate_REG_[ind[0]]->pt());
    }
  }
  }

  // Histogram number 5
  //   * Plot: ETA ( zp[1] ) 
  {
  {
    MAuint32 ind[1];
    for (ind[0]=0;ind[0]<_P_zp_I1I_PTorderingfinalstate_REG_.size();ind[0]++)
    {
      Manager()->FillHisto("5_ETA", _P_zp_I1I_PTorderingfinalstate_REG_[ind[0]]->eta());
    }
  }
  }

  // Histogram number 6
  //   * Plot: PT ( zp[2] ) 
  {
  {
    MAuint32 ind[1];
    for (ind[0]=0;ind[0]<_P_zp_I2I_PTorderingfinalstate_REG_.size();ind[0]++)
    {
      Manager()->FillHisto("6_PT", _P_zp_I2I_PTorderingfinalstate_REG_[ind[0]]->pt());
    }
  }
  }

  // Histogram number 7
  //   * Plot: ETA ( zp[2] ) 
  {
  {
    MAuint32 ind[1];
    for (ind[0]=0;ind[0]<_P_zp_I2I_PTorderingfinalstate_REG_.size();ind[0]++)
    {
      Manager()->FillHisto("7_ETA", _P_zp_I2I_PTorderingfinalstate_REG_[ind[0]]->eta());
    }
  }
  }

  // Histogram number 8
  //   * Plot: M ( zp[1] zp[2] ) 
  {
  {
    MAuint32 ind[2];
    std::vector<std::set<const MCParticleFormat*> > combis;
    for (ind[0]=0;ind[0]<_P_zp_I1I_PTorderingfinalstate_REG_.size();ind[0]++)
    {
    for (ind[1]=0;ind[1]<_P_zp_I2I_PTorderingfinalstate_REG_.size();ind[1]++)
    {
    if (_P_zp_I2I_PTorderingfinalstate_REG_[ind[1]]==_P_zp_I1I_PTorderingfinalstate_REG_[ind[0]]) continue;

    // Checking if consistent combination
    std::set<const MCParticleFormat*> mycombi;
    for (MAuint32 i=0;i<2;i++)
    {
      mycombi.insert(_P_zp_I1I_PTorderingfinalstate_REG_[ind[i]]);
      mycombi.insert(_P_zp_I2I_PTorderingfinalstate_REG_[ind[i]]);
    }
    MAbool matched=false;
    for (MAuint32 i=0;i<combis.size();i++)
      if (combis[i]==mycombi) {matched=true; break;}
    if (matched) continue;
    else combis.push_back(mycombi);

    ParticleBaseFormat q;
    q+=_P_zp_I1I_PTorderingfinalstate_REG_[ind[0]]->momentum();
    q+=_P_zp_I2I_PTorderingfinalstate_REG_[ind[1]]->momentum();
      Manager()->FillHisto("8_M", q.m());
    }
    }
  }
  }

  // Histogram number 9
  //   * Plot: DELTAR ( zp[1] , zp[2] ) 
  {
  {
    MAuint32 a[1];
    for (a[0]=0;a[0]<_P_zp_I1I_PTorderingfinalstate_REG_.size();a[0]++)
    {
    MAuint32 b[1];
    for (b[0]=0;b[0]<_P_zp_I2I_PTorderingfinalstate_REG_.size();b[0]++)
    {
     if ( _P_zp_I1I_PTorderingfinalstate_REG_[a[0]] == _P_zp_I2I_PTorderingfinalstate_REG_[b[0]] ) continue;
      Manager()->FillHisto("9_DELTAR", _P_zp_I1I_PTorderingfinalstate_REG_[a[0]]->dr(_P_zp_I2I_PTorderingfinalstate_REG_[b[0]]));
    }
    }
  }
  }

  return true;
}

void user::Finalize(const SampleFormat& summary, const std::vector<SampleFormat>& files)
{
}
