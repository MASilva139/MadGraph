#include "SampleAnalyzer/User/Analyzer/user.h"
using namespace MA5;

MAbool user::Initialize(const MA5::Configuration& cfg,
                      const std::map<std::string,std::string>& parameters)
{
  // Initializing PhysicsService for RECO
  PHYSICS->recConfig().Reset();

  PHYSICS->recConfig().UseDeltaRIsolation(0.5);

  // ===== Signal region ===== //
  Manager()->AddRegionSelection("myregion");

  // ===== Selections ===== //

  // ===== Histograms ===== //

  // No problem during initialization
  return true;
}

MAbool user::Execute(SampleFormat& sample, const EventFormat& event)
{
  MAfloat32 __event_weight__ = 1.0;
  if (weighted_events_ && event.mc()!=0) __event_weight__ = event.mc()->weight();

  if (sample.mc()!=0) sample.mc()->addWeightedEvents(__event_weight__);
  Manager()->InitializeForNewEvent(__event_weight__);

  return true;
}

void user::Finalize(const SampleFormat& summary, const std::vector<SampleFormat>& files)
{
}
