void selection_17()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo123","canvas_plotflow_tempo123",0,0,700,500);
  gStyle->SetOptStat(0);
  gStyle->SetOptTitle(0);
  canvas->SetHighLightColor(2);
  canvas->SetFillColor(0);
  canvas->SetBorderMode(0);
  canvas->SetBorderSize(3);
  canvas->SetFrameBorderMode(0);
  canvas->SetFrameBorderSize(0);
  canvas->SetTickx(1);
  canvas->SetTicky(1);
  canvas->SetLeftMargin(0.14);
  canvas->SetRightMargin(0.05);
  canvas->SetBottomMargin(0.15);
  canvas->SetTopMargin(0.05);

  // Creating a new TH1F
  TH1F* S18_M_0 = new TH1F("S18_M_0","S18_M_0",40,0.0,500.0);
  // Content
  S18_M_0->SetBinContent(0,0.0); // underflow
  S18_M_0->SetBinContent(1,0.002954884723086472);
  S18_M_0->SetBinContent(2,0.02379546045177045);
  S18_M_0->SetBinContent(3,0.037160895548966295);
  S18_M_0->SetBinContent(4,0.06504599094662096);
  S18_M_0->SetBinContent(5,0.09376100591932182);
  S18_M_0->SetBinContent(6,0.1369099382826265);
  S18_M_0->SetBinContent(7,0.13364377791666138);
  S18_M_0->SetBinContent(8,0.10908492002942209);
  S18_M_0->SetBinContent(9,0.08407846946794038);
  S18_M_0->SetBinContent(10,0.06469231572035679);
  S18_M_0->SetBinContent(11,0.054334800640072546);
  S18_M_0->SetBinContent(12,0.03612532352181483);
  S18_M_0->SetBinContent(13,0.03556322204807423);
  S18_M_0->SetBinContent(14,0.02487459411940356);
  S18_M_0->SetBinContent(15,0.022116841075371072);
  S18_M_0->SetBinContent(16,0.012480013508417393);
  S18_M_0->SetBinContent(17,0.010586757846198915);
  S18_M_0->SetBinContent(18,0.008327429724051575);
  S18_M_0->SetBinContent(19,0.007368052224101088);
  S18_M_0->SetBinContent(20,0.005471056833064572);
  S18_M_0->SetBinContent(21,0.005471451690993876);
  S18_M_0->SetBinContent(22,0.004047548311882288);
  S18_M_0->SetBinContent(23,0.004690497762470042);
  S18_M_0->SetBinContent(24,0.0026180823309005217);
  S18_M_0->SetBinContent(25,0.0021180179327865917);
  S18_M_0->SetBinContent(26,0.0024223355915589093);
  S18_M_0->SetBinContent(27,0.001620095231028052);
  S18_M_0->SetBinContent(28,0.0009806675215750485);
  S18_M_0->SetBinContent(29,0.001172263031397094);
  S18_M_0->SetBinContent(30,0.001188407825772619);
  S18_M_0->SetBinContent(31,0.0004841734875970814);
  S18_M_0->SetBinContent(32,0.00024348222393331972);
  S18_M_0->SetBinContent(33,0.00048568700088312425);
  S18_M_0->SetBinContent(34,0.000265138256015327);
  S18_M_0->SetBinContent(35,0.0);
  S18_M_0->SetBinContent(36,0.0);
  S18_M_0->SetBinContent(37,0.00024339923850239241);
  S18_M_0->SetBinContent(38,0.00048522100326077206);
  S18_M_0->SetBinContent(39,0.0002428890233185356);
  S18_M_0->SetBinContent(40,0.0);
  S18_M_0->SetBinContent(41,0.0028448919887814044); // overflow
  S18_M_0->SetEntries(4270);
  // Style
  S18_M_0->SetLineColor(9);
  S18_M_0->SetLineStyle(1);
  S18_M_0->SetLineWidth(1);
  S18_M_0->SetFillColor(0);
  S18_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_124","mystack");
  stack->Add(S18_M_0);
  stack->Draw("nostack");

  // Y axis
  stack->GetYaxis()->SetLabelSize(0.04);
  stack->GetYaxis()->SetLabelOffset(0.005);
  stack->GetYaxis()->SetTitleSize(0.06);
  stack->GetYaxis()->SetTitleFont(22);
  stack->GetYaxis()->SetTitleOffset(1);
  stack->GetYaxis()->SetTitle("Events  ( scaled to one )");

  // X axis
  stack->GetXaxis()->SetLabelSize(0.04);
  stack->GetXaxis()->SetLabelOffset(0.005);
  stack->GetXaxis()->SetTitleSize(0.06);
  stack->GetXaxis()->SetTitleFont(22);
  stack->GetXaxis()->SetTitleOffset(1);
  stack->GetXaxis()->SetTitle("M [ j_{2} mu_{1} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_17.png");

}
