GRAY='\033[1;30m'
RED='\033[1;31m'
GREEN='\033[1;32m'
YELLOW='\033[1;33m'
BLUE='\033[1;34m'
PURPLE='\033[1;35m'
WHITE='\033[0;37m'
CYAN='\033[1;36m'

TEST_TO_RUN=0

make dir

echo -e "\n${GREEN}Compilation...\n${PURPLE}"

if [ "$1" = "RaspAppli_llt" ]
then
make RaspAppli_llt
else
    if [ "$1" = "RaspAppli.llt" ]
    then
    make RaspAppli_llt
    TEST_TO_RUN=1
    else
    make RaspAppli
    fi
fi

echo -e "\n${GREEN}Compilation ended\n"

if [ $TEST_TO_RUN = 1 ]
then
    echo -e "\n${GREEN}Tests...\n${BLUE}"
    ./RaspAppli_llt
    echo -e "\n${GREEN}Tests ended\n"

fi

make clean