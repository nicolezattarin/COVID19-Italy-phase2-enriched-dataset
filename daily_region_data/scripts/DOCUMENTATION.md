# Contents
This folder contains the source files and scripts I have used to process them to write down the regions-daily.csv dataset one can find in the previous folder:

* **cleaned-dpc-covid19-ita-regioni.csv**  is a source dataset, so **it is not a script**. The source for this file is the public Githup repository of Dipartimento della Protezione Civile you can find [here](https://github.com/pcm-dpc/COVID-19/tree/master/dati-regioni), but it has been slightly modified for easier use: the empty fields have been replaced by zeros and all commas from notes have been manually deleted. Also the cleaned dataset in this folder obviously will not coincide with the latest version in the source anymore.

* **colors_daily.csv**  is another source dataset, so **it is not a script**. This is the _same file_ one can find in the region\_colors folder, so for more info about this dataset see the [REGIONS_RESTRICTIONS.md](https://github.com/nicolezatta/covid19-phase2-data-Italy/blob/main/region_colors/REGIONS_RESTRICTIONS.md) file in region\_colors.

* **clean_colors.sh**  is a bash script with the colors\_daily.csv dataset as the only dependency. This script creates a new file called cleaned\_colors\_daily.csv which is an easier to use copy of the original.

* **get_region.sh**  is a bash script with the cleaned-dpc-covid19-ita-regioni.csv dataset as the only dependency and the name of one of the regions as the only argument. This script creates a new .csv file that contains only records from the original dataset relative to the single region of choice: this is referred to as an "extracted region file".

* **get_all_regions.sh**  is a bash script that simply reiterates the get\_region.sh script for all possible choices.

* **fix_region.cpp**  is the source C++ code for a program that processes any given extracted region file. This code doesn't have any dependency to be compiled so one can simply use `$ g++ fix_region.cpp -o fix_region` inline. The executable needs the name of one of the regions as the only argument, and it needs that region's extracted file and the cleaned\_colors\_daily.csv file as the dependencies. This program creates a "fixed" copy of the original extracted region file.

* **fix_all_regions.sh**  is a bash script that simply reiterates the fix\_region executable for all possible choices. This script assumes that the user chose "fix\_region" as the name of the executable.

* **link_regions.cpp**  is the source C++ code for a program that puts together the fixed extracted region files. This code doesn't have any dependency to be compiled so one can simply use `$ g++ link_regions.cpp -o link_regions` inline. The executable doesn't take any arguments, but needs **all** fixed extracted region files as dependencies. This program creates the regions-daily.csv dataset one can find in the previous folder.

Please do mind that further information can be found in the comments of each script.

Please note that all software in this folder is protected by the [license](https://github.com/nicolezatta/covid19-phase2-data-Italy/blob/main/LICENSE) that is in the main folder.

# Usage
As it has been somewhat implied in the previous section, there is a specific order to use these scripts:

1. The **two .csv files** are source datasets, and the scripts have dependencies on them so they must be included in the same folder.

2. One should start from the **get\_region.sh** script to extract single regions from the source. The get\_all\_regions.sh script is included to extract all regions at once.

3. One should then compile and use the **fix_region** program to process the raw extracted region files. Once fix\_region has been compiled, the fix\_all\_regions.sh script is included to process all extracted region files at once.

4. One should finally compile and use the **link_regions** program to generate the regions\_daily.csv dataset.

Please note that the scripts are coded so that their execution out of order will cause nothing to happen, except for a standard output message telling the user what may went wrong. Information about the order these scripts should be used in is also included in the comments within them.
