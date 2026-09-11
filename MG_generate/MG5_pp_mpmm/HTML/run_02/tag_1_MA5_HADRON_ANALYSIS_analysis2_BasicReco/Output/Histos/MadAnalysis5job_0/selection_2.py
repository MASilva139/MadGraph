def selection_2():

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

    # Creating weights for histo: y3_PT_0
    y3_PT_0_weights = numpy.array([0.0,0.2718024930188144,0.3551257617362489,0.16537547999384697,0.08458151401628712,0.04827078121600323,0.026095047583303114,0.01633394779195719,0.010277329544537734,0.006833485475147256,0.004971596429904753,0.002967098284693528,0.0019822946364475213,0.0011927818907826917,0.0008847693630903125,0.0008743815703096615,0.000568862697065214,0.0004907450747337732,0.0005324478008852514,0.00014858506810463113,4.944719476536258e-05,9.900254259819855e-05,0.00014444375889688488,0.0001981292899528682,0.00010095038651288325,4.9438837000082135e-05,0.0,0.0,0.0,0.0,0.0,0.0,0.0,4.918479811068416e-05,0.0,0.0,0.0,0.0,0.0,0.0])

    # Creating a new Canvas
    fig   = plt.figure(figsize=(8.75,6.25),dpi=80)
    frame = gridspec.GridSpec(1,1)
    pad   = fig.add_subplot(frame[0])

    # Creating a new Stack
    pad.hist(x=xData, bins=xBinning, weights=y3_PT_0_weights,\
             label="$tag\_1\_pythia8\_BasicReco$", histtype="step", rwidth=1.0,\
             color=None, edgecolor="#5954d8", linewidth=1, linestyle="solid",\
             bottom=None, cumulative=False, density=False, align="mid", orientation="vertical")


    # Axis
    plt.rc('text',usetex=False)
    plt.xlabel(r"$p_{T}$ $[ j_{1} ]$ $(GeV/c)$ ",\
               fontsize=16,color="black")
    plt.ylabel(r"$\mathrm{Events}$ $(\mathrm{scaled}\ \mathrm{to}\ \mathrm{one})$",\
               fontsize=16,color="black")

    # Boundary of y-axis
    ymax=(numpy.array([y3_PT_0_weights.max()])).max()*1.1
    #ymin=0 # linear scale
    ymin=min([x for x in (numpy.array([y3_PT_0_weights.min(),1.])) if x])/100. # log scale
    plt.gca().set_ylim(ymin,ymax)

    # Log/Linear scale for X-axis
    plt.gca().set_xscale("linear")
    #plt.gca().set_xscale("log",nonpositive="clip")

    # Log/Linear scale for Y-axis
    #plt.gca().set_yscale("linear")
    plt.gca().set_yscale("log",nonpositive="clip")

    # Saving the image
    plt.savefig('../../HTML/MadAnalysis5job_0/selection_2.png')

# Running!
if __name__ == '__main__':
    selection_2()
