void selection_1()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo21","canvas_plotflow_tempo21",0,0,700,500);
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
  TH1F* S2_THT_0 = new TH1F("S2_THT_0","S2_THT_0",40,0.0,500.0);
  // Content
  S2_THT_0->SetBinContent(0,0.0); // underflow
  S2_THT_0->SetBinContent(1,0.25092768788933145);
  S2_THT_0->SetBinContent(2,0.15194844508553917);
  S2_THT_0->SetBinContent(3,0.12410889650882082);
  S2_THT_0->SetBinContent(4,0.1021808988131714);
  S2_THT_0->SetBinContent(5,0.08223084412775473);
  S2_THT_0->SetBinContent(6,0.06713265621629039);
  S2_THT_0->SetBinContent(7,0.052764268782074915);
  S2_THT_0->SetBinContent(8,0.04275489713817492);
  S2_THT_0->SetBinContent(9,0.031341039606268134);
  S2_THT_0->SetBinContent(10,0.021736722654930662);
  S2_THT_0->SetBinContent(11,0.02064161147759657);
  S2_THT_0->SetBinContent(12,0.01333968042892786);
  S2_THT_0->SetBinContent(13,0.010402470584879324);
  S2_THT_0->SetBinContent(14,0.006502864492222736);
  S2_THT_0->SetBinContent(15,0.00497037265921398);
  S2_THT_0->SetBinContent(16,0.004134602355869093);
  S2_THT_0->SetBinContent(17,0.002642855192071314);
  S2_THT_0->SetBinContent(18,0.0020244624475814705);
  S2_THT_0->SetBinContent(19,0.0015258975573338345);
  S2_THT_0->SetBinContent(20,0.0016342820291266474);
  S2_THT_0->SetBinContent(21,0.001007481760074323);
  S2_THT_0->SetBinContent(22,0.0008031529125955898);
  S2_THT_0->SetBinContent(23,0.0007404931398403699);
  S2_THT_0->SetBinContent(24,0.00042034395736089005);
  S2_THT_0->SetBinContent(25,0.00043308807802562165);
  S2_THT_0->SetBinContent(26,0.0005186123941453767);
  S2_THT_0->SetBinContent(27,0.0002110612646659682);
  S2_THT_0->SetBinContent(28,0.0004144553923216242);
  S2_THT_0->SetBinContent(29,0.0002032177707659597);
  S2_THT_0->SetBinContent(30,0.0);
  S2_THT_0->SetBinContent(31,0.0);
  S2_THT_0->SetBinContent(32,0.0);
  S2_THT_0->SetBinContent(33,0.0);
  S2_THT_0->SetBinContent(34,9.213353825338496e-05);
  S2_THT_0->SetBinContent(35,0.0);
  S2_THT_0->SetBinContent(36,0.0);
  S2_THT_0->SetBinContent(37,0.0);
  S2_THT_0->SetBinContent(38,0.0);
  S2_THT_0->SetBinContent(39,0.0);
  S2_THT_0->SetBinContent(40,0.0);
  S2_THT_0->SetBinContent(41,0.0002105037447714949); // overflow
  S2_THT_0->SetEntries(10000);
  // Style
  S2_THT_0->SetLineColor(9);
  S2_THT_0->SetLineStyle(1);
  S2_THT_0->SetLineWidth(1);
  S2_THT_0->SetFillColor(0);
  S2_THT_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_22","mystack");
  stack->Add(S2_THT_0);
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
  stack->GetXaxis()->SetTitle("H_{T} (GeV) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(0);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_1.png");

}
