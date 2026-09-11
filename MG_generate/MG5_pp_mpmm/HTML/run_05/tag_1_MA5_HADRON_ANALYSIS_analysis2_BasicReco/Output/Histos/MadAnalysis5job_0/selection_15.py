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
    y16_M_0_weights = numpy.array([0.0004897275019755765,0.008716476828710762,0.019485710566461357,0.04440991718945541,0.09050700008768175,0.135800414237736,0.14613386233246578,0.11802895788294855,0.08950108691941333,0.0800612227564877,0.05671088793397127,0.041468496822370124,0.030621532547847753,0.027568313837519502,0.027937213408960358,0.01782968627713673,0.01247572525463944,0.008991123430442848,0.006194144217973969,0.009341545328058396,0.004179655646161405,0.0018926887182243559,0.003874151847085661,0.003282627382726218,0.0028721886538700947,0.002371611377770507,0.0014651293304111038,0.000969481592100791,0.0009665047054767978,0.0014483466303095054,0.0014923382554350136,0.0,0.0004843860687382411,0.0009677859709463242,0.0,0.000496727005383431,0.0,0.0,0.00048191132940993505,0.0])

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
