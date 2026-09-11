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
    y2_THT_0_weights = numpy.array([0.253096124199657,0.1498980705993111,0.12491021683359338,0.1017400864732111,0.08183285297594874,0.06568754044352257,0.05252393383731992,0.03978889385523521,0.031445902101868546,0.024634884805995905,0.017975517220068914,0.014028857657732156,0.010798243155619858,0.007674766049713734,0.006030083767061138,0.00441266009378894,0.0029699686930548686,0.0025202790250684693,0.001723345599893037,0.0014094333981936407,0.0010525747938046545,0.0008144719697200455,0.0007108963537800502,0.000473554902115599,0.000478511348534478,0.0002808734380654789,0.00028406816355617853,0.0001740896071942927,0.00013556847935526322,8.317197103264857e-05,6.183338010454714e-05,8.273147690325401e-05,3.174259879562457e-05,3.0486575692351875e-05,2.9297871996836887e-05,5.198703990635035e-05,2.0231604843142368e-05,9.678341286375533e-06,2.122201376343348e-05,3.179787710281731e-05])

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
