void selection_15()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo119","canvas_plotflow_tempo119",0,0,700,500);
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
  TH1F* S16_M_0 = new TH1F("S16_M_0","S16_M_0",40,0.0,500.0);
  // Content
  S16_M_0->SetBinContent(0,0.0); // underflow
  S16_M_0->SetBinContent(1,0.001582296331316387);
  S16_M_0->SetBinContent(2,0.008876011080560403);
  S16_M_0->SetBinContent(3,0.019133413418444652);
  S16_M_0->SetBinContent(4,0.04267896343962925);
  S16_M_0->SetBinContent(5,0.08608948909126093);
  S16_M_0->SetBinContent(6,0.13529204150406626);
  S16_M_0->SetBinContent(7,0.14200895867119248);
  S16_M_0->SetBinContent(8,0.11605649331713579);
  S16_M_0->SetBinContent(9,0.0938980053713045);
  S16_M_0->SetBinContent(10,0.07722166400331482);
  S16_M_0->SetBinContent(11,0.05670240273173023);
  S16_M_0->SetBinContent(12,0.04741515059922423);
  S16_M_0->SetBinContent(13,0.034685371673756085);
  S16_M_0->SetBinContent(14,0.027117751743603865);
  S16_M_0->SetBinContent(15,0.022100031819273523);
  S16_M_0->SetBinContent(16,0.016861410182268655);
  S16_M_0->SetBinContent(17,0.013398341684938628);
  S16_M_0->SetBinContent(18,0.011188096992878729);
  S16_M_0->SetBinContent(19,0.007492985293333946);
  S16_M_0->SetBinContent(20,0.007013821184496702);
  S16_M_0->SetBinContent(21,0.005414700536819509);
  S16_M_0->SetBinContent(22,0.004720192116976603);
  S16_M_0->SetBinContent(23,0.003811137970737596);
  S16_M_0->SetBinContent(24,0.0029249378883123623);
  S16_M_0->SetBinContent(25,0.002648382767496743);
  S16_M_0->SetBinContent(26,0.002347485827078445);
  S16_M_0->SetBinContent(27,0.0016771444322118976);
  S16_M_0->SetBinContent(28,0.0015185349877032976);
  S16_M_0->SetBinContent(29,0.0010295263387669154);
  S16_M_0->SetBinContent(30,0.0006377463334193034);
  S16_M_0->SetBinContent(31,0.0005836030974772103);
  S16_M_0->SetBinContent(32,0.0009180400577729784);
  S16_M_0->SetBinContent(33,0.0006875913561570931);
  S16_M_0->SetBinContent(34,0.000392507471227532);
  S16_M_0->SetBinContent(35,0.0006276854349334657);
  S16_M_0->SetBinContent(36,0.0003813910000021406);
  S16_M_0->SetBinContent(37,0.0002951884281278217);
  S16_M_0->SetBinContent(38,0.00010418466913022073);
  S16_M_0->SetBinContent(39,0.00029085018561978093);
  S16_M_0->SetBinContent(40,0.00020178071501179346);
  S16_M_0->SetBinContent(41,0.0019746882512871305); // overflow
  S16_M_0->SetEntries(20920);
  // Style
  S16_M_0->SetLineColor(9);
  S16_M_0->SetLineStyle(1);
  S16_M_0->SetLineWidth(1);
  S16_M_0->SetFillColor(0);
  S16_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_120","mystack");
  stack->Add(S16_M_0);
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
  stack->GetXaxis()->SetTitle("M [ j_{1} mu_{1} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_15.png");

}
