def selection_4():

    # Library import
    import numpy
    import matplotlib
    import matplotlib.pyplot   as plt
    import matplotlib.gridspec as gridspec

    # Library version
    matplotlib_version = matplotlib.__version__
    numpy_version      = numpy.__version__

    # Histo binning
    xBinning = numpy.linspace(-10.0,10.0,41,endpoint=True)

    # Creating data sequence: middle of each bin
    xData = numpy.array([-9.75,-9.25,-8.75,-8.25,-7.75,-7.25,-6.75,-6.25,-5.75,-5.25,-4.75,-4.25,-3.75,-3.25,-2.75,-2.25,-1.75,-1.25,-0.75,-0.25,0.25,0.75,1.25,1.75,2.25,2.75,3.25,3.75,4.25,4.75,5.25,5.75,6.25,6.75,7.25,7.75,8.25,8.75,9.25,9.75])

    # Creating weights for histo: y5_ETA_0
    y5_ETA_0_weights = numpy.array([0.0,0.0,7.933680065999998e-06,7.933680065999998e-06,2.3801040197999993e-05,6.346944052799998e-05,0.0001348726011220003,0.00029883530248600007,0.0005580022046420002,0.0008171690067979994,0.0010684020088879977,0.0011847630098560007,0.0012852560106919983,0.0014492190120560008,0.0012773220106259957,0.0011900520098999997,0.0011900520098999997,0.0009652644080299997,0.0007642778063579995,0.0006928747057639997,0.0007140312059399998,0.0008647711071939996,0.0009837763081839994,0.0011715400097459991,0.001348726011220003,0.0013883940115499997,0.0014016170116600013,0.0013672380113740037,0.0012297200102299962,0.0010869140090419985,0.0008251027068639996,0.0005527130045979995,0.00028032340233200025,0.00016131820134200029,5.818032048399998e-05,2.3801040197999993e-05,5.2891200439999985e-06,0.0,2.6445600219999992e-06,0.0])

    # Creating a new Canvas
    fig   = plt.figure(figsize=(8.75,6.25),dpi=80)
    frame = gridspec.GridSpec(1,1)
    pad   = fig.add_subplot(frame[0])

    # Creating a new Stack
    pad.hist(x=xData, bins=xBinning, weights=y5_ETA_0_weights,\
             label="$run\_01$", histtype="stepfilled", rwidth=1.0,\
             color="#5954d8", edgecolor="#5954d8", linewidth=1, linestyle="solid",\
             bottom=None, cumulative=False, density=False, align="mid", orientation="vertical")


    # Axis
    plt.rc('text',usetex=False)
    plt.xlabel(r"$\eta$ $[ zp_{1} ]$ ",\
               fontsize=16,color="black")
    plt.ylabel(r"$\mathrm{Events}$ $(\mathcal{L}_{\mathrm{int}} = 10\ \mathrm{fb}^{-1})$ ",\
               fontsize=16,color="black")

    # Boundary of y-axis
    ymax=(y5_ETA_0_weights).max()*1.1
    #ymin=0 # linear scale
    ymin=min([x for x in (y5_ETA_0_weights) if x])/100. # log scale
    plt.gca().set_ylim(ymin,ymax)

    # Log/Linear scale for X-axis
    plt.gca().set_xscale("linear")
    #plt.gca().set_xscale("log",nonpositive="clip")

    # Log/Linear scale for Y-axis
    #plt.gca().set_yscale("linear")
    plt.gca().set_yscale("log",nonpositive="clip")

    # Saving the image
    plt.savefig('../../HTML/MadAnalysis5job_0/selection_4.png')

# Running!
if __name__ == '__main__':
    selection_4()
