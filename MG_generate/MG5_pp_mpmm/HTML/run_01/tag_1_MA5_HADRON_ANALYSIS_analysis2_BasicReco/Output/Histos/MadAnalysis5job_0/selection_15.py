def selection_15():

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

    # Creating weights for histo: y16_M_0
    y16_M_0_weights = numpy.array([0.0012760783671985532,0.007924550860607822,0.019371646934765858,0.04248024369918896,0.08447910636342064,0.13684641565960087,0.14229290726352076,0.11819994740179603,0.09363143003790658,0.07356954562293501,0.058163324500869536,0.04485537992112143,0.035919801439181186,0.02811474184320668,0.020588560627511802,0.018054347072108734,0.014270511291533842,0.010596615623646406,0.008445103060947827,0.007237933087446162,0.0047698156989617255,0.003970687458303372,0.004526489707297576,0.0035638039200809406,0.003249875500659964,0.001432775122327914,0.002053587905210572,0.0009564594445679884,0.0008795123429530552,0.0007581601526011708,0.0009067343818724506,0.0013710010214403028,0.0009354128621560657,0.0005353732773524048,0.00047746903494142747,0.0005516131195184645,0.000535699246344499,0.00020154688828930798,0.00027229471831058795,0.0002158569642533126])

    # Creating a new Canvas
    fig   = plt.figure(figsize=(8.75,6.25),dpi=80)
    frame = gridspec.GridSpec(1,1)
    pad   = fig.add_subplot(frame[0])

    # Creating a new Stack
    pad.hist(x=xData, bins=xBinning, weights=y16_M_0_weights,\
             label="$tag\_1\_pythia8\_BasicReco$", histtype="step", rwidth=1.0,\
             color=None, edgecolor="#5954d8", linewidth=1, linestyle="solid",\
             bottom=None, cumulative=False, density=False, align="mid", orientation="vertical")


    # Axis
    plt.rc('text',usetex=False)
    plt.xlabel(r"$M$ $[ j_{1} mu_{1} ]$ $(GeV/c^{2})$ ",\
               fontsize=16,color="black")
    plt.ylabel(r"$\mathrm{Events}$ $(\mathrm{scaled}\ \mathrm{to}\ \mathrm{one})$",\
               fontsize=16,color="black")

    # Boundary of y-axis
    ymax=(numpy.array([y16_M_0_weights.max()])).max()*1.1
    #ymin=0 # linear scale
    ymin=min([x for x in (numpy.array([y16_M_0_weights.min(),1.])) if x])/100. # log scale
    plt.gca().set_ylim(ymin,ymax)

    # Log/Linear scale for X-axis
    plt.gca().set_xscale("linear")
    #plt.gca().set_xscale("log",nonpositive="clip")

    # Log/Linear scale for Y-axis
    #plt.gca().set_yscale("linear")
    plt.gca().set_yscale("log",nonpositive="clip")

    # Saving the image
    plt.savefig('../../HTML/MadAnalysis5job_0/selection_15.png')

# Running!
if __name__ == '__main__':
    selection_15()
