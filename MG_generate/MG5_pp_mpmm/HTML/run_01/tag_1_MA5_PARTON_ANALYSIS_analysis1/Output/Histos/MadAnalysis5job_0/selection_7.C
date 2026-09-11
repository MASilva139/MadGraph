void selection_7()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo15","canvas_plotflow_tempo15",0,0,700,500);
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
  TH1F* S8_M_0 = new TH1F("S8_M_0","S8_M_0",40,0.0,500.0);
  // Content
  S8_M_0->SetBinContent(0,0.0); // underflow
  S8_M_0->SetBinContent(1,0.0);
  S8_M_0->SetBinContent(2,534221.6149835071);
  S8_M_0->SetBinContent(3,901135.4252744715);
  S8_M_0->SetBinContent(4,333840.0093633316);
  S8_M_0->SetBinContent(5,163649.70458994253);
  S8_M_0->SetBinContent(6,139173.04390343674);
  S8_M_0->SetBinContent(7,552680.2155012222);
  S8_M_0->SetBinContent(8,5521862.154873667);
  S8_M_0->SetBinContent(9,168201.14471759842);
  S8_M_0->SetBinContent(10,45902.16128743454);
  S8_M_0->SetBinContent(11,22554.940632606587);
  S8_M_0->SetBinContent(12,12710.328356491182);
  S8_M_0->SetBinContent(13,7973.456223634414);
  S8_M_0->SetBinContent(14,5849.448164061591);
  S8_M_0->SetBinContent(15,4517.730126710413);
  S8_M_0->SetBinContent(16,2882.5820808488234);
  S8_M_0->SetBinContent(17,2208.2940619368233);
  S8_M_0->SetBinContent(18,1702.5772477528005);
  S8_M_0->SetBinContent(19,1213.7184340416004);
  S8_M_0->SetBinContent(20,910.2888255312004);
  S8_M_0->SetBinContent(21,758.5740212760002);
  S8_M_0->SetBinContent(22,792.2884222216003);
  S8_M_0->SetBinContent(23,657.4308184392003);
  S8_M_0->SetBinContent(24,387.7156108744001);
  S8_M_0->SetBinContent(25,337.1440094560001);
  S8_M_0->SetBinContent(26,303.4296085104001);
  S8_M_0->SetBinContent(27,236.0008066192001);
  S8_M_0->SetBinContent(28,303.4296085104001);
  S8_M_0->SetBinContent(29,168.57200472800005);
  S8_M_0->SetBinContent(30,101.14320283680003);
  S8_M_0->SetBinContent(31,168.57200472800005);
  S8_M_0->SetBinContent(32,101.14320283680003);
  S8_M_0->SetBinContent(33,134.85760378240005);
  S8_M_0->SetBinContent(34,50.571601418400014);
  S8_M_0->SetBinContent(35,33.71440094560001);
  S8_M_0->SetBinContent(36,67.42880189120002);
  S8_M_0->SetBinContent(37,67.42880189120002);
  S8_M_0->SetBinContent(38,33.71440094560001);
  S8_M_0->SetBinContent(39,84.28600236400003);
  S8_M_0->SetBinContent(40,0.0);
  S8_M_0->SetBinContent(41,623.7164174936003); // overflow
  S8_M_0->SetEntries(500000);
  // Style
  S8_M_0->SetLineColor(9);
  S8_M_0->SetLineStyle(1);
  S8_M_0->SetLineWidth(1);
  S8_M_0->SetFillColor(9);
  S8_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_16","mystack");
  stack->Add(S8_M_0);
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
  stack->GetXaxis()->SetTitle("M [ mu+_{1} mu-_{1} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_7.png");

}
