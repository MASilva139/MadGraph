void selection_4()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo9","canvas_plotflow_tempo9",0,0,700,500);
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
  TH1F* S5_ETA_0 = new TH1F("S5_ETA_0","S5_ETA_0",40,-10.0,10.0);
  // Content
  S5_ETA_0->SetBinContent(0,0.0); // underflow
  S5_ETA_0->SetBinContent(1,0.0);
  S5_ETA_0->SetBinContent(2,0.0);
  S5_ETA_0->SetBinContent(3,7.933680065999998e-06);
  S5_ETA_0->SetBinContent(4,7.933680065999998e-06);
  S5_ETA_0->SetBinContent(5,2.3801040197999993e-05);
  S5_ETA_0->SetBinContent(6,6.346944052799998e-05);
  S5_ETA_0->SetBinContent(7,0.0001348726011220003);
  S5_ETA_0->SetBinContent(8,0.00029883530248600007);
  S5_ETA_0->SetBinContent(9,0.0005580022046420002);
  S5_ETA_0->SetBinContent(10,0.0008171690067979994);
  S5_ETA_0->SetBinContent(11,0.0010684020088879977);
  S5_ETA_0->SetBinContent(12,0.0011847630098560007);
  S5_ETA_0->SetBinContent(13,0.0012852560106919983);
  S5_ETA_0->SetBinContent(14,0.0014492190120560008);
  S5_ETA_0->SetBinContent(15,0.0012773220106259957);
  S5_ETA_0->SetBinContent(16,0.0011900520098999997);
  S5_ETA_0->SetBinContent(17,0.0011900520098999997);
  S5_ETA_0->SetBinContent(18,0.0009652644080299997);
  S5_ETA_0->SetBinContent(19,0.0007642778063579995);
  S5_ETA_0->SetBinContent(20,0.0006928747057639997);
  S5_ETA_0->SetBinContent(21,0.0007140312059399998);
  S5_ETA_0->SetBinContent(22,0.0008647711071939996);
  S5_ETA_0->SetBinContent(23,0.0009837763081839994);
  S5_ETA_0->SetBinContent(24,0.0011715400097459991);
  S5_ETA_0->SetBinContent(25,0.001348726011220003);
  S5_ETA_0->SetBinContent(26,0.0013883940115499997);
  S5_ETA_0->SetBinContent(27,0.0014016170116600013);
  S5_ETA_0->SetBinContent(28,0.0013672380113740037);
  S5_ETA_0->SetBinContent(29,0.0012297200102299962);
  S5_ETA_0->SetBinContent(30,0.0010869140090419985);
  S5_ETA_0->SetBinContent(31,0.0008251027068639996);
  S5_ETA_0->SetBinContent(32,0.0005527130045979995);
  S5_ETA_0->SetBinContent(33,0.00028032340233200025);
  S5_ETA_0->SetBinContent(34,0.00016131820134200029);
  S5_ETA_0->SetBinContent(35,5.818032048399998e-05);
  S5_ETA_0->SetBinContent(36,2.3801040197999993e-05);
  S5_ETA_0->SetBinContent(37,5.2891200439999985e-06);
  S5_ETA_0->SetBinContent(38,0.0);
  S5_ETA_0->SetBinContent(39,2.6445600219999992e-06);
  S5_ETA_0->SetBinContent(40,0.0);
  S5_ETA_0->SetBinContent(41,0.0); // overflow
  S5_ETA_0->SetEntries(10000);
  // Style
  S5_ETA_0->SetLineColor(9);
  S5_ETA_0->SetLineStyle(1);
  S5_ETA_0->SetLineWidth(1);
  S5_ETA_0->SetFillColor(9);
  S5_ETA_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_10","mystack");
  stack->Add(S5_ETA_0);
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
  stack->GetXaxis()->SetTitle("#eta [ zp_{1} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_4.png");

}
