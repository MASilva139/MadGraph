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
    y20_M_0_weights = numpy.array([0.0,0.022884429856573706,0.07566242948895929,0.03799481509800751,0.025910016240988227,0.03118358541388114,0.11902682266731766,0.652704364450075,0.019668082489251858,0.005977021312574243,0.0035081755984591816,0.0013942122347755956,0.001259647149019156,0.0005134095097181019,0.0005094607720621642,0.0008839916506355383,0.00013018228402773287,0.0,0.00013217036375034032,0.0,0.00012141909629937446,0.00013299123827685634,0.0,0.00013311943514172795,0.0,0.0,0.00013407162412939648,0.0,0.0,0.0,0.0,0.0,0.00013558202607628878,0.0,0.0,0.0,0.0,0.0,0.0,0.0])

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
