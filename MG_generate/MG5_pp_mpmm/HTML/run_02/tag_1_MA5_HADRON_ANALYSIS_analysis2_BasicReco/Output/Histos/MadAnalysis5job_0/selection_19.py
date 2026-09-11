def selection_19():

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

    # Creating weights for histo: y20_M_0
    y20_M_0_weights = numpy.array([2.3772702664880317e-05,0.02245529974407397,0.07647489813850115,0.03923106248335792,0.025438951154320377,0.0322769012000891,0.11936430863058275,0.6485372549861486,0.020677566038571907,0.005956385710970826,0.0030493398489107437,0.001751872590260316,0.0011364882126961193,0.0007062119909540467,0.000482952619657292,0.0004237323117128816,0.00028497713712181136,0.00026050253879024627,0.00018204047901003304,0.00020615850717240695,0.0001444574616852657,5.273754285465263e-05,0.00015750445869639843,9.300627667955886e-05,7.98377557309646e-05,7.816673233020949e-05,9.255484385246727e-05,2.6964005679141058e-05,1.2850145180935713e-05,2.7040192404048215e-05,8.078740899738488e-05,5.4169038451624754e-05,5.437942788874805e-05,0.0,0.0,0.0,0.0,1.3847578524095083e-05,0.0,1.3645730148474216e-05])

    # Creating a new Canvas
    fig   = plt.figure(figsize=(8.75,6.25),dpi=80)
    frame = gridspec.GridSpec(1,1)
    pad   = fig.add_subplot(frame[0])

    # Creating a new Stack
    pad.hist(x=xData, bins=xBinning, weights=y20_M_0_weights,\
             label="$tag\_1\_pythia8\_BasicReco$", histtype="step", rwidth=1.0,\
             color=None, edgecolor="#5954d8", linewidth=1, linestyle="solid",\
             bottom=None, cumulative=False, density=False, align="mid", orientation="vertical")


    # Axis
    plt.rc('text',usetex=False)
    plt.xlabel(r"$M$ $[ mu_{1} mu_{2} ]$ $(GeV/c^{2})$ ",\
               fontsize=16,color="black")
    plt.ylabel(r"$\mathrm{Events}$ $(\mathrm{scaled}\ \mathrm{to}\ \mathrm{one})$",\
               fontsize=16,color="black")

    # Boundary of y-axis
    ymax=(numpy.array([y20_M_0_weights.max()])).max()*1.1
    #ymin=0 # linear scale
    ymin=min([x for x in (numpy.array([y20_M_0_weights.min(),1.])) if x])/100. # log scale
    plt.gca().set_ylim(ymin,ymax)

    # Log/Linear scale for X-axis
    plt.gca().set_xscale("linear")
    #plt.gca().set_xscale("log",nonpositive="clip")

    # Log/Linear scale for Y-axis
    #plt.gca().set_yscale("linear")
    plt.gca().set_yscale("log",nonpositive="clip")

    # Saving the image
    plt.savefig('../../HTML/MadAnalysis5job_0/selection_19.png')

# Running!
if __name__ == '__main__':
    selection_19()
