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
    y2_THT_0_weights = numpy.array([0.2500210410576683,0.14979097524046364,0.12517500261472753,0.10268285398891376,0.08356884142862625,0.0648535476455975,0.05129420445790104,0.04053837914849047,0.031657455967537475,0.024546480255622977,0.019231068372923082,0.014214241704276822,0.01079873104851961,0.007851205614286616,0.0054935604651829804,0.004876343152484005,0.0028559992423855714,0.0023592770599141304,0.0019010691828874,0.0012945264630524226,0.0011680301774958139,0.0009887606397131078,0.0006401566532995464,0.0005457981178563077,0.00037919434618981137,0.0003331488429564967,0.00015053701466463332,0.00022091291621782294,4.5101677832669145e-05,0.0001304943661825668,8.654517240843881e-05,4.516370658102848e-05,4.5064016800738454e-05,0.0,1.3773446255082215e-05,0.0,0.0,1.4996622914802329e-05,2.8832575993475136e-05,4.209167986716172e-05])

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
