def selection_14():

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

    # Creating weights for histo: y15_M_0
    y15_M_0_weights = numpy.array([0.0,0.03593284395670648,0.06836348032051526,0.11231184057703471,0.12611004984560611,0.1224988875660274,0.09441165942657084,0.0842070899582004,0.0627674130183635,0.053410994614784345,0.04140880344648586,0.03686113896830728,0.023924332984149123,0.02569448628324283,0.016852800846495503,0.01658713032947216,0.014727328602466845,0.011372544069999824,0.01002392576901665,0.006560970331722511,0.005266221267469059,0.004844681764865107,0.00425970437639817,0.00229699344332182,0.0009441674950412787,0.002300951992133433,0.0019762901789201013,0.0013441863299138216,0.0006840875047931899,0.0010048844626579056,0.002557268027685364,0.0013140517194281495,0.00033683709855002343,0.0,0.0,0.000977530475956267,0.001356093507802553,0.0003369264676993434,0.0006310561038383448,0.0002959638658568993])

    # Creating a new Canvas
    fig   = plt.figure(figsize=(8.75,6.25),dpi=80)
    frame = gridspec.GridSpec(1,1)
    pad   = fig.add_subplot(frame[0])

    # Creating a new Stack
    pad.hist(x=xData, bins=xBinning, weights=y15_M_0_weights,\
             label="$tag\_1\_pythia8\_BasicReco$", histtype="step", rwidth=1.0,\
             color=None, edgecolor="#5954d8", linewidth=1, linestyle="solid",\
             bottom=None, cumulative=False, density=False, align="mid", orientation="vertical")


    # Axis
    plt.rc('text',usetex=False)
    plt.xlabel(r"$M$ $[ j_{1} j_{2} ]$ $(GeV/c^{2})$ ",\
               fontsize=16,color="black")
    plt.ylabel(r"$\mathrm{Events}$ $(\mathrm{scaled}\ \mathrm{to}\ \mathrm{one})$",\
               fontsize=16,color="black")

    # Boundary of y-axis
    ymax=(numpy.array([y15_M_0_weights.max()])).max()*1.1
    #ymin=0 # linear scale
    ymin=min([x for x in (numpy.array([y15_M_0_weights.min(),1.])) if x])/100. # log scale
    plt.gca().set_ylim(ymin,ymax)

    # Log/Linear scale for X-axis
    plt.gca().set_xscale("linear")
    #plt.gca().set_xscale("log",nonpositive="clip")

    # Log/Linear scale for Y-axis
    #plt.gca().set_yscale("linear")
    plt.gca().set_yscale("log",nonpositive="clip")

    # Saving the image
    plt.savefig('../../HTML/MadAnalysis5job_0/selection_14.png')

# Running!
if __name__ == '__main__':
    selection_14()
