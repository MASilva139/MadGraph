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
    y8_M_0_weights = numpy.array([0.0,0.0,0.0,0.008832830320639994,0.006952548252383998,0.0036944501341119916,0.0020548230745919974,0.0013169910478080054,0.0009097286330239994,0.0006955193252480013,0.0005024664182400005,0.0003067690111360017,0.00023007670835199946,0.00019305290700800089,0.0001639627059519994,9.784872355200008e-05,8.462592307200006e-05,8.198136297600007e-05,3.1734721152000025e-05,4.231296153600003e-05,5.289120192000005e-05,2.380104086400002e-05,1.0578240384000007e-05,2.380104086400002e-05,2.6445600960000024e-05,5.289120192000004e-06,1.3222800480000012e-05,1.0578240384000007e-05,0.0,7.933680288000006e-06,5.289120192000004e-06,5.289120192000004e-06,0.0,5.289120192000004e-06,1.0578240384000007e-05,5.289120192000004e-06,5.289120192000004e-06,2.644560096000002e-06,1.5867360576000013e-05,0.0])

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
    plt.xlabel(r"$M$ $[ zp_{1} zp_{2} ]$ $(GeV/c^{2})$ ",\
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
