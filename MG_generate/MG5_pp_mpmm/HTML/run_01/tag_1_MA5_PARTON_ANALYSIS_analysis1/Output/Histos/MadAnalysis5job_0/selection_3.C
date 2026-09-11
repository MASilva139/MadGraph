void selection_3()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo7","canvas_plotflow_tempo7",0,0,700,500);
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
  TH1F* S4_PT_0 = new TH1F("S4_PT_0","S4_PT_0",40,0.0,500.0);
  // Content
  S4_PT_0->SetBinContent(0,0.0); // underflow
  S4_PT_0->SetBinContent(1,896735.6207677183);
  S4_PT_0->SetBinContent(2,1661361.4384758736);
  S4_PT_0->SetBinContent(3,1996667.846241316);
  S4_PT_0->SetBinContent(4,3745754.0867488296);
  S4_PT_0->SetBinContent(5,89579.16207458559);
  S4_PT_0->SetBinContent(6,19503.780451692794);
  S4_PT_0->SetBinContent(7,8344.314193248001);
  S4_PT_0->SetBinContent(8,3826.5840886207916);
  S4_PT_0->SetBinContent(9,2376.8660550464188);
  S4_PT_0->SetBinContent(10,1196.8612277184002);
  S4_PT_0->SetBinContent(11,876.5744203008002);
  S4_PT_0->SetBinContent(12,640.5736148352);
  S4_PT_0->SetBinContent(13,236.00080546560005);
  S4_PT_0->SetBinContent(14,421.4300097600001);
  S4_PT_0->SetBinContent(15,286.57240663680005);
  S4_PT_0->SetBinContent(16,101.1432023424);
  S4_PT_0->SetBinContent(17,202.2864046848);
  S4_PT_0->SetBinContent(18,33.714400780800005);
  S4_PT_0->SetBinContent(19,50.5716011712);
  S4_PT_0->SetBinContent(20,33.714400780800005);
  S4_PT_0->SetBinContent(21,33.714400780800005);
  S4_PT_0->SetBinContent(22,33.714400780800005);
  S4_PT_0->SetBinContent(23,84.286001952);
  S4_PT_0->SetBinContent(24,67.42880156160001);
  S4_PT_0->SetBinContent(25,50.5716011712);
  S4_PT_0->SetBinContent(26,33.714400780800005);
  S4_PT_0->SetBinContent(27,50.5716011712);
  S4_PT_0->SetBinContent(28,0.0);
  S4_PT_0->SetBinContent(29,0.0);
  S4_PT_0->SetBinContent(30,0.0);
  S4_PT_0->SetBinContent(31,0.0);
  S4_PT_0->SetBinContent(32,16.857200390400003);
  S4_PT_0->SetBinContent(33,0.0);
  S4_PT_0->SetBinContent(34,0.0);
  S4_PT_0->SetBinContent(35,0.0);
  S4_PT_0->SetBinContent(36,0.0);
  S4_PT_0->SetBinContent(37,0.0);
  S4_PT_0->SetBinContent(38,0.0);
  S4_PT_0->SetBinContent(39,0.0);
  S4_PT_0->SetBinContent(40,0.0);
  S4_PT_0->SetBinContent(41,0.0); // overflow
  S4_PT_0->SetEntries(500000);
  // Style
  S4_PT_0->SetLineColor(9);
  S4_PT_0->SetLineStyle(1);
  S4_PT_0->SetLineWidth(1);
  S4_PT_0->SetFillColor(9);
  S4_PT_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_8","mystack");
  stack->Add(S4_PT_0);
  stack->Draw("");

  // Y axis
  stack->GetYaxis()->SetLabelSize(0.04);
  stack->GetYaxis()->SetLabelOffset(0.005);
  stack->GetYaxis()->SetTitleSize(0.06);
  stack->GetYaxis()->SetTitleFont(22);
  stack->GetYaxis()->SetTitleOffset(1);
  stack->GetYaxis()->SetTitle("Events  ( L_{int} = 10 fb^{-1} )");

  // X axis
  stack->GetXaxis()->SetLabelSize(0.04);
  stack->GetXaxis()->SetLabelOffset(0.005);
  stack->GetXaxis()->SetTitleSize(0.06);
  stack->GetXaxis()->SetTitleFont(22);
  stack->GetXaxis()->SetTitleOffset(1);
  stack->GetXaxis()->SetTitle("p_{T} [ mu-_{1} ] (GeV/c) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_3.png");

}
