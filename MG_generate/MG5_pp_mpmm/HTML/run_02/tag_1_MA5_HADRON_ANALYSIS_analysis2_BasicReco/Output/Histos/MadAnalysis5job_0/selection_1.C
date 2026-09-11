void selection_1()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo91","canvas_plotflow_tempo91",0,0,700,500);
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
  S2_THT_0->SetBinContent(1,0.253096124199657);
  S2_THT_0->SetBinContent(2,0.1498980705993111);
  S2_THT_0->SetBinContent(3,0.12491021683359338);
  S2_THT_0->SetBinContent(4,0.1017400864732111);
  S2_THT_0->SetBinContent(5,0.08183285297594874);
  S2_THT_0->SetBinContent(6,0.06568754044352257);
  S2_THT_0->SetBinContent(7,0.05252393383731992);
  S2_THT_0->SetBinContent(8,0.03978889385523521);
  S2_THT_0->SetBinContent(9,0.031445902101868546);
  S2_THT_0->SetBinContent(10,0.024634884805995905);
  S2_THT_0->SetBinContent(11,0.017975517220068914);
  S2_THT_0->SetBinContent(12,0.014028857657732156);
  S2_THT_0->SetBinContent(13,0.010798243155619858);
  S2_THT_0->SetBinContent(14,0.007674766049713734);
  S2_THT_0->SetBinContent(15,0.006030083767061138);
  S2_THT_0->SetBinContent(16,0.00441266009378894);
  S2_THT_0->SetBinContent(17,0.0029699686930548686);
  S2_THT_0->SetBinContent(18,0.0025202790250684693);
  S2_THT_0->SetBinContent(19,0.001723345599893037);
  S2_THT_0->SetBinContent(20,0.0014094333981936407);
  S2_THT_0->SetBinContent(21,0.0010525747938046545);
  S2_THT_0->SetBinContent(22,0.0008144719697200455);
  S2_THT_0->SetBinContent(23,0.0007108963537800502);
  S2_THT_0->SetBinContent(24,0.000473554902115599);
  S2_THT_0->SetBinContent(25,0.000478511348534478);
  S2_THT_0->SetBinContent(26,0.0002808734380654789);
  S2_THT_0->SetBinContent(27,0.00028406816355617853);
  S2_THT_0->SetBinContent(28,0.0001740896071942927);
  S2_THT_0->SetBinContent(29,0.00013556847935526322);
  S2_THT_0->SetBinContent(30,8.317197103264857e-05);
  S2_THT_0->SetBinContent(31,6.183338010454714e-05);
  S2_THT_0->SetBinContent(32,8.273147690325401e-05);
  S2_THT_0->SetBinContent(33,3.174259879562457e-05);
  S2_THT_0->SetBinContent(34,3.0486575692351875e-05);
  S2_THT_0->SetBinContent(35,2.9297871996836887e-05);
  S2_THT_0->SetBinContent(36,5.198703990635035e-05);
  S2_THT_0->SetBinContent(37,2.0231604843142368e-05);
  S2_THT_0->SetBinContent(38,9.678341286375533e-06);
  S2_THT_0->SetBinContent(39,2.122201376343348e-05);
  S2_THT_0->SetBinContent(40,3.179787710281731e-05);
  S2_THT_0->SetBinContent(41,3.954940658857385e-05); // overflow
  S2_THT_0->SetEntries(100000);
  // Style
  S2_THT_0->SetLineColor(9);
  S2_THT_0->SetLineStyle(1);
  S2_THT_0->SetLineWidth(1);
  S2_THT_0->SetFillColor(0);
  S2_THT_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_92","mystack");
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
