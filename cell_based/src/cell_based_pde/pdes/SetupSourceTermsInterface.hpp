#ifndef CELLBASEDPDE_SETUPSOURCETERMSINTERFACE_HPP_
#define CELLBASEDPDE_SETUPSOURCETERMSINTERFACE_HPP_

#include "AbstractCellPopulation.hpp"
#include "TetrahedralMesh.hpp"

template <unsigned DIM>
class SetupSourceTermsInterface
{

public:
    virtual ~SetupSourceTermsInterface() = default;

    /**
     * Set up the source terms.
     *
     * \todo this is identical to the one in AveragedSourceEllipticPde so refactor.
     *
     * @param rCoarseMesh reference to the coarse mesh
     * @param pCellPdeElementMap optional pointer to the map from cells to coarse elements
     */
    void virtual SetupSourceTerms(TetrahedralMesh<DIM,DIM>& rCoarseMesh, std::map<CellPtr, unsigned>* pCellPdeElementMap=nullptr) = 0;

};


#endif // CELLBASEDPDE_SETUPSOURCETERMSINTERFACE_HPP_