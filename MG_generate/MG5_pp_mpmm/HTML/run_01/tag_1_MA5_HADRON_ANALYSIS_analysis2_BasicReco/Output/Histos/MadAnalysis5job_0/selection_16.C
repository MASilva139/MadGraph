void selection_16()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo51","canvas_plotflow_tempo51",0,0,700,500);
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
  TH1F* S17_M_0 = new TH1F("S17_M_0","S17_M_0",40,0.0,500.0);
  // Content
  S17_M_0->SetBinContent(0,0.0); // underflow
  S17_M_0->SetBinContent(1,0.013150501952096591);
  S17_M_0->SetBinContent(2,0.07034059960720741);
  S17_M_0->SetBinContent(3,0.12150080299194028);
  S17_M_0->SetBinContent(4,0.15135679696147564);
  S17_M_0->SetBinContent(5,0.151430723139828);
  S17_M_0->SetBinContent(6,0.12625456384381023);
  S17_M_0->SetBinContent(7,0.09503876305246388);
  S17_M_0->SetBinContent(8,0.06812035358613727);
  S17_M_0->SetBinContent(9,0.05064857483503965);
  S17_M_0->SetBinContent(10,0.03329042178676685);
  S17_M_0->SetBinContent(11,0.02817359536657838);
  S17_M_0->SetBinContent(12,0.020402140337884848);
  S17_M_0->SetBinContent(13,0.014971748130492717);
  S17_M_0->SetBinContent(14,0.011965583043463823);
  S17_M_0->SetBinContent(15,0.009067691700924509);
  S17_M_0->SetBinContent(16,0.007475221058999999);
  S17_M_0->SetBinContent(17,0.005632790841002267);
  S17_M_0->SetBinContent(18,0.004232788118083689);
  S17_M_0->SetBinContent(19,0.002644059392331737);
  S17_M_0->SetBinContent(20,0.0027210359535957515);
  S17_M_0->SetBinContent(21,0.001848625380232398);
  S17_M_0->SetBinContent(22,0.0017732121932422917);
  S17_M_0->SetBinContent(23,0.0017110770812420472);
  S17_M_0->SetBinContent(24,0.0011779431198949836);
  S17_M_0->SetBinContent(25,0.0006954355449231156);
  S17_M_0->SetBinContent(26,0.0008658700687517643);
  S17_M_0->SetBinContent(27,0.0009146086329626932);
  S17_M_0->SetBinContent(28,7.92141804673144e-05);
  S17_M_0->SetBinContent(29,0.0003081782976349302);
  S17_M_0->SetBinContent(30,0.00015266551305141815);
  S17_M_0->SetBinContent(31,0.00039579810731401493);
  S17_M_0->SetBinContent(32,0.00023799626278616867);
  S17_M_0->SetBinContent(33,7.889565091375938e-05);
  S17_M_0->SetBinContent(34,0.0003903456008911472);
  S17_M_0->SetBinContent(35,8.039763570125381e-05);
  S17_M_0->SetBinContent(36,7.905102316435966e-05);
  S17_M_0->SetBinContent(37,0.00014841332594047843);
  S17_M_0->SetBinContent(38,7.879428613807594e-05);
  S17_M_0->SetBinContent(39,0.0);
  S17_M_0->SetBinContent(40,0.0);
  S17_M_0->SetBinContent(41,0.000564722394623927); // overflow
  S17_M_0->SetEntries(13096);
  // Style
  S17_M_0->SetLineColor(9);
  S17_M_0->SetLineStyle(1);
  S17_M_0->SetLineWidth(1);
  S17_M_0->SetFillColor(0);
  S17_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_52","mystack");
  stack->Add(S17_M_0);
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
  stack->GetXaxis()->SetTitle("M [ j_{1} mu_{2} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_16.png");

}
