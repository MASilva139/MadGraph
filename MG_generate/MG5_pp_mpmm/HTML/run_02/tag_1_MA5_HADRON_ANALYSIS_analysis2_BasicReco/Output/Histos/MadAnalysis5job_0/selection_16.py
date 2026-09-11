def selection_16():

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

    # Creating weights for histo: y17_M_0
    y17_M_0_weights = numpy.array([0.012926878228447713,0.07078598013604688,0.11963118631974481,0.15728693007392286,0.15437904460384114,0.12356690098247822,0.0888748051401088,0.067785274229449,0.04818662199676325,0.03786485672477446,0.027842347347306416,0.020639319754944294,0.015049672762812393,0.011099479698656607,0.008657168661669044,0.007300344876949126,0.006222364576651858,0.003844650247295983,0.003975706479012122,0.002954653452842816,0.0020578194659792762,0.0015759022893617484,0.0013443950916548501,0.0010791481839947216,0.0007196986025488285,0.0009613689057431083,0.00033609930689058274,0.0003853984925810513,0.0005069297211696522,0.00017224591067945878,0.00039822431187270044,0.0002823264629818976,0.00011328403211136021,0.00017080539364858197,0.0003381966917541687,0.00022364965178005552,5.651853009033467e-05,0.0,0.0,5.674660686806282e-05])

    # Creating a new Canvas
    fig   = plt.figure(figsize=(8.75,6.25),dpi=80)
    frame = gridspec.GridSpec(1,1)
    pad   = fig.add_subplot(frame[0])

    # Creating a new Stack
    pad.hist(x=xData, bins=xBinning, weights=y17_M_0_weights,\
             label="$tag\_1\_pythia8\_BasicReco$", histtype="step", rwidth=1.0,\
             color=None, edgecolor="#5954d8", linewidth=1, linestyle="solid",\
             bottom=None, cumulative=False, density=False, align="mid", orientation="vertical")


    # Axis
    plt.rc('text',usetex=False)
    plt.xlabel(r"$M$ $[ j_{1} mu_{2} ]$ $(GeV/c^{2})$ ",\
               fontsize=16,color="black")
    plt.ylabel(r"$\mathrm{Events}$ $(\mathrm{scaled}\ \mathrm{to}\ \mathrm{one})$",\
               fontsize=16,color="black")

    # Boundary of y-axis
    ymax=(numpy.array([y17_M_0_weights.max()])).max()*1.1
    #ymin=0 # linear scale
    ymin=min([x for x in (numpy.array([y17_M_0_weights.min(),1.])) if x])/100. # log scale
    plt.gca().set_ylim(ymin,ymax)

    # Log/Linear scale for X-axis
    plt.gca().set_xscale("linear")
    #plt.gca().set_xscale("log",nonpositive="clip")

    # Log/Linear scale for Y-axis
    #plt.gca().set_yscale("linear")
    plt.gca().set_yscale("log",nonpositive="clip")

    # Saving the image
    plt.savefig('../../HTML/MadAnalysis5job_0/selection_16.png')

# Running!
if __name__ == '__main__':
    selection_16()
