def selection_6():

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

    # Creating weights for histo: y7_ETA_0
    y7_ETA_0_weights = numpy.array([0.0,0.0,0.0,7.933680023999998e-06,3.173472009599999e-05,7.669224023199996e-05,0.00014280620043199982,0.0002750342008319998,0.0005156892015599999,0.0008436146025519995,0.0010155110030719994,0.0012376540037439992,0.0013883940041999995,0.0013619480041199982,0.0013804600041759985,0.0011530280034879991,0.0011556730034960004,0.0009097286027519996,0.0007960126024079998,0.0007060975021359997,0.0006796519020559996,0.0008013017024239999,0.001052535003184,0.0010974920033199984,0.0013540150040960005,0.001393683004215999,0.0014254180043119999,0.0013302140040240005,0.0012931900039120001,0.0011133600033680004,0.0008198136024799997,0.0005394902016319996,0.000319991800968,0.000140161700424,7.140312021599998e-05,5.289120015999998e-06,5.289120015999998e-06,2.644560007999999e-06,2.644560007999999e-06,0.0])

    # Creating a new Canvas
    fig   = plt.figure(figsize=(8.75,6.25),dpi=80)
    frame = gridspec.GridSpec(1,1)
    pad   = fig.add_subplot(frame[0])

    # Creating a new Stack
    pad.hist(x=xData, bins=xBinning, weights=y7_ETA_0_weights,\
             label="$run\_01$", histtype="stepfilled", rwidth=1.0,\
             color="#5954d8", edgecolor="#5954d8", linewidth=1, linestyle="solid",\
             bottom=None, cumulative=False, density=False, align="mid", orientation="vertical")


    # Axis
    plt.rc('text',usetex=False)
    plt.xlabel(r"$\eta$ $[ zp_{2} ]$ ",\
               fontsize=16,color="black")
    plt.ylabel(r"$\mathrm{Events}$ $(\mathcal{L}_{\mathrm{int}} = 10\ \mathrm{fb}^{-1})$ ",\
               fontsize=16,color="black")

    # Boundary of y-axis
    ymax=(y7_ETA_0_weights).max()*1.1
    #ymin=0 # linear scale
    ymin=min([x for x in (y7_ETA_0_weights) if x])/100. # log scale
    plt.gca().set_ylim(ymin,ymax)

    # Log/Linear scale for X-axis
    plt.gca().set_xscale("linear")
    #plt.gca().set_xscale("log",nonpositive="clip")

    # Log/Linear scale for Y-axis
    #plt.gca().set_yscale("linear")
    plt.gca().set_yscale("log",nonpositive="clip")

    # Saving the image
    plt.savefig('../../HTML/MadAnalysis5job_0/selection_6.png')

# Running!
if __name__ == '__main__':
    selection_6()
