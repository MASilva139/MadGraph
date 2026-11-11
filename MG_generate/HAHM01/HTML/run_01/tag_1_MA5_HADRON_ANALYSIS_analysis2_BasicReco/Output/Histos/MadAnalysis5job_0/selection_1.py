def selection_1():

    # Library import
    import numpy
    import matplotlib
    import matplotlib.pyplot   as plt
    import matplotlib.gridspec as gridspec

    # Library version
    matplotlib_version = matplotlib.__version__
    numpy_version      = numpy.__version__

    # Histo binning
    xBinning = numpy.linspace(0.0,500.0,41,endpoint=True)

    # Creating data sequence: middle of each bin
    xData = numpy.array([6.25,18.75,31.25,43.75,56.25,68.75,81.25,93.75,106.25,118.75,131.25,143.75,156.25,168.75,181.25,193.75,206.25,218.75,231.25,243.75,256.25,268.75,281.25,293.75,306.25,318.75,331.25,343.75,356.25,368.75,381.25,393.75,406.25,418.75,431.25,443.75,456.25,468.75,481.25,493.75])

    # Creating weights for histo: y2_THT_0
    y2_THT_0_weights = numpy.array([0.0354378774370782,0.08783627185858099,0.11711777205185112,0.11833452880195353,0.10660084797754234,0.09579929576545111,0.08759231167831927,0.06559831921331193,0.05767401310459604,0.04196808596198377,0.036255141662711855,0.027896273456334206,0.022400771926426005,0.019560945100455984,0.014020390132695586,0.012756743941044726,0.010836892905001045,0.0074366854068267894,0.006014733839479483,0.0049638262522814615,0.003958883921351625,0.0027696168079387224,0.0030147589750359935,0.002533599008433498,0.0017776078387977277,0.0015404361157258918,0.0010984424839319195,0.0007756815958051889,0.000841338229540045,0.0008005247235397765,0.00021351086756196737,0.000126423076381218,9.9908757199273e-05,0.0005268184295069284,0.00010448035883809059,0.00011114733536890853,0.00024255896697447231,0.0001171252397352789,0.00022114093743065614,0.00022964191993350206])

    # Creating a new Canvas
    fig   = plt.figure(figsize=(8.75,6.25),dpi=80)
    frame = gridspec.GridSpec(1,1)
    pad   = fig.add_subplot(frame[0])

    # Creating a new Stack
    pad.hist(x=xData, bins=xBinning, weights=y2_THT_0_weights,\
             label="$tag\_1\_pythia8\_BasicReco$", histtype="step", rwidth=1.0,\
             color=None, edgecolor="#5954d8", linewidth=1, linestyle="solid",\
             bottom=None, cumulative=False, density=False, align="mid", orientation="vertical")


    # Axis
    plt.rc('text',usetex=False)
    plt.xlabel(r"$H_{T}$ $(GeV)$ ",\
               fontsize=16,color="black")
    plt.ylabel(r"$\mathrm{Events}$ $(\mathrm{scaled}\ \mathrm{to}\ \mathrm{one})$",\
               fontsize=16,color="black")

    # Boundary of y-axis
    ymax=(numpy.array([y2_THT_0_weights.max()])).max()*1.1
    ymin=0 # linear scale
    #ymin=min([x for x in (numpy.array([y2_THT_0_weights.min(),1.])) if x])/100. # log scale
    plt.gca().set_ylim(ymin,ymax)

    # Log/Linear scale for X-axis
    plt.gca().set_xscale("linear")
    #plt.gca().set_xscale("log",nonpositive="clip")

    # Log/Linear scale for Y-axis
    plt.gca().set_yscale("linear")
    #plt.gca().set_yscale("log",nonpositive="clip")

    # Saving the image
    plt.savefig('../../HTML/MadAnalysis5job_0/selection_1.png')

# Running!
if __name__ == '__main__':
    selection_1()
