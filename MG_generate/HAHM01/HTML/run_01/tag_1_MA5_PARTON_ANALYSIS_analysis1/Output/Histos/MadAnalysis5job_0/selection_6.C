void selection_6()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo13","canvas_plotflow_tempo13",0,0,700,500);
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
  TH1F* S7_ETA_0 = new TH1F("S7_ETA_0","S7_ETA_0",40,-10.0,10.0);
  // Content
  S7_ETA_0->SetBinContent(0,0.0); // underflow
  S7_ETA_0->SetBinContent(1,0.0);
  S7_ETA_0->SetBinContent(2,0.0);
  S7_ETA_0->SetBinContent(3,0.0);
  S7_ETA_0->SetBinContent(4,7.933680023999998e-06);
  S7_ETA_0->SetBinContent(5,3.173472009599999e-05);
  S7_ETA_0->SetBinContent(6,7.669224023199996e-05);
  S7_ETA_0->SetBinContent(7,0.00014280620043199982);
  S7_ETA_0->SetBinContent(8,0.0002750342008319998);
  S7_ETA_0->SetBinContent(9,0.0005156892015599999);
  S7_ETA_0->SetBinContent(10,0.0008436146025519995);
  S7_ETA_0->SetBinContent(11,0.0010155110030719994);
  S7_ETA_0->SetBinContent(12,0.0012376540037439992);
  S7_ETA_0->SetBinContent(13,0.0013883940041999995);
  S7_ETA_0->SetBinContent(14,0.0013619480041199982);
  S7_ETA_0->SetBinContent(15,0.0013804600041759985);
  S7_ETA_0->SetBinContent(16,0.0011530280034879991);
  S7_ETA_0->SetBinContent(17,0.0011556730034960004);
  S7_ETA_0->SetBinContent(18,0.0009097286027519996);
  S7_ETA_0->SetBinContent(19,0.0007960126024079998);
  S7_ETA_0->SetBinContent(20,0.0007060975021359997);
  S7_ETA_0->SetBinContent(21,0.0006796519020559996);
  S7_ETA_0->SetBinContent(22,0.0008013017024239999);
  S7_ETA_0->SetBinContent(23,0.001052535003184);
  S7_ETA_0->SetBinContent(24,0.0010974920033199984);
  S7_ETA_0->SetBinContent(25,0.0013540150040960005);
  S7_ETA_0->SetBinContent(26,0.001393683004215999);
  S7_ETA_0->SetBinContent(27,0.0014254180043119999);
  S7_ETA_0->SetBinContent(28,0.0013302140040240005);
  S7_ETA_0->SetBinContent(29,0.0012931900039120001);
  S7_ETA_0->SetBinContent(30,0.0011133600033680004);
  S7_ETA_0->SetBinContent(31,0.0008198136024799997);
  S7_ETA_0->SetBinContent(32,0.0005394902016319996);
  S7_ETA_0->SetBinContent(33,0.000319991800968);
  S7_ETA_0->SetBinContent(34,0.000140161700424);
  S7_ETA_0->SetBinContent(35,7.140312021599998e-05);
  S7_ETA_0->SetBinContent(36,5.289120015999998e-06);
  S7_ETA_0->SetBinContent(37,5.289120015999998e-06);
  S7_ETA_0->SetBinContent(38,2.644560007999999e-06);
  S7_ETA_0->SetBinContent(39,2.644560007999999e-06);
  S7_ETA_0->SetBinContent(40,0.0);
  S7_ETA_0->SetBinContent(41,0.0); // overflow
  S7_ETA_0->SetEntries(10000);
  // Style
  S7_ETA_0->SetLineColor(9);
  S7_ETA_0->SetLineStyle(1);
  S7_ETA_0->SetLineWidth(1);
  S7_ETA_0->SetFillColor(9);
  S7_ETA_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_14","mystack");
  stack->Add(S7_ETA_0);
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
  stack->GetXaxis()->SetTitle("#eta [ zp_{2} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_6.png");

}
