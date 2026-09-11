def selection_7():

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

    # Creating weights for histo: y8_M_0
    y8_M_0_weights = numpy.array([0.0,534221.6149835071,901135.4252744715,333840.0093633316,163649.70458994253,139173.04390343674,552680.2155012222,5521862.154873667,168201.14471759842,45902.16128743454,22554.940632606587,12710.328356491182,7973.456223634414,5849.448164061591,4517.730126710413,2882.5820808488234,2208.2940619368233,1702.5772477528005,1213.7184340416004,910.2888255312004,758.5740212760002,792.2884222216003,657.4308184392003,387.7156108744001,337.1440094560001,303.4296085104001,236.0008066192001,303.4296085104001,168.57200472800005,101.14320283680003,168.57200472800005,101.14320283680003,134.85760378240005,50.571601418400014,33.71440094560001,67.42880189120002,67.42880189120002,33.71440094560001,84.28600236400003,0.0])

    # Creating a new Canvas
    fig   = plt.figure(figsize=(8.75,6.25),dpi=80)
    frame = gridspec.GridSpec(1,1)
    pad   = fig.add_subplot(frame[0])

    # Creating a new Stack
    pad.hist(x=xData, bins=xBinning, weights=y8_M_0_weights,\
             label="$run\_01$", histtype="stepfilled", rwidth=1.0,\
             color="#5954d8", edgecolor="#5954d8", linewidth=1, linestyle="solid",\
             bottom=None, cumulative=False, density=False, align="mid", orientation="vertical")


    # Axis
    plt.rc('text',usetex=False)
    plt.xlabel(r"$M$ $[ mu+_{1} mu-_{1} ]$ $(GeV/c^{2})$ ",\
               fontsize=16,color="black")
    plt.ylabel(r"$\mathrm{Events}$ $(\mathcal{L}_{\mathrm{int}} = 10\ \mathrm{fb}^{-1})$ ",\
               fontsize=16,color="black")

    # Boundary of y-axis
    ymax=(y8_M_0_weights).max()*1.1
    #ymin=0 # linear scale
    ymin=min([x for x in (y8_M_0_weights) if x])/100. # log scale
    plt.gca().set_ylim(ymin,ymax)

    # Log/Linear scale for X-axis
    plt.gca().set_xscale("linear")
    #plt.gca().set_xscale("log",nonpositive="clip")

    # Log/Linear scale for Y-axis
    #plt.gca().set_yscale("linear")
    plt.gca().set_yscale("log",nonpositive="clip")

    # Saving the image
    plt.savefig('../../HTML/MadAnalysis5job_0/selection_7.png')

# Running!
if __name__ == '__main__':
    selection_7()
