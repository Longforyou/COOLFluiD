#include "Heat/Heat.hh"
#include "Heat2DDiffusivePrim.hh"
#include "Heat2DDiffusiveVarSet.hh"
#include "Environment/ObjectProvider.hh"

//////////////////////////////////////////////////////////////////////////////

using namespace std;
using namespace COOLFluiD::Framework;

//////////////////////////////////////////////////////////////////////////////

namespace COOLFluiD {

  namespace Physics {

    namespace Heat {

//////////////////////////////////////////////////////////////////////////////

Environment::ObjectProvider<Heat2DDiffusivePrim, DiffusiveVarSet, HeatModule, 2> Heat2DDiffusivePrimProvider("Heat2DDiffusivePrim");

//////////////////////////////////////////////////////////////////////////////

Heat2DDiffusivePrim::Heat2DDiffusivePrim(const std::string& name, Common::SafePtr<Framework::PhysicalModelImpl> model) :
  Heat2DDiffusiveVarSet(name, model)
{
  vector<std::string> names(1);
  names[0] = "T";
  setVarNames(names);
}

//////////////////////////////////////////////////////////////////////////////

Heat2DDiffusivePrim::~Heat2DDiffusivePrim()
{
}

//////////////////////////////////////////////////////////////////////////////

    } // namespace Heat

  } // namespace Physics

} // namespace COOLFluiD

//////////////////////////////////////////////////////////////////////////////