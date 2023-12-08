#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <vector>
# include <list>
# include <iterator>
# include <sys/time.h>
# include "Parser.hpp"
# include "Utils.hpp"

typedef std::pair<int, int> Pair;

typedef std::vector<Pair> PairVec;
typedef PairVec::iterator PairVecIt;
typedef IntVec::iterator IntVecIt;

typedef	std::list<Pair> PairLst;
typedef std::list<int> IntLst;
typedef PairLst::iterator PairLstIt;
typedef IntLst::iterator IntLstIt;

class PMergeMe
{

	private:
		PMergeMe(void);

		IntVec _input;
		IntVec _tmpVec;
		IntLst _tmpLst;
		long _elapsedVec;
		long _elapsedLst;

	public:
		PMergeMe(IntVec input);
		PMergeMe(const PMergeMe &copy);
		PMergeMe &operator=(const PMergeMe &op);
		~PMergeMe(void);

		void pmm(void);
		void initContainers(void);

		void sortIntVec(void);
		PairVec initPairVec(void);
		void mergeSortFirstVec(PairVec &ab, int const begin, int const end);
		void mergeVec(PairVec *ab, int const begin, int const mid, int const end);

		void sortIntLst(void);
		PairLst initPairLst(void);
		void mergeSortFirstLst(PairLst ab, PairLstIt begin, PairLstIt end);

		void printResult(void);

};

#endif