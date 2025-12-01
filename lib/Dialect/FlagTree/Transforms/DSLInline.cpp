#include "mlir/IR/BuiltinOps.h"
#include "triton/Dialect/FlagTree/Transforms/Passes.h"

namespace mlir::triton::flagtree {
#define GEN_PASS_DEF_FLAGTREEDSLINLINE
#include "triton/Dialect/FlagTree/Transforms/Passes.h.inc"
} // namespace mlir::triton::flagtree

namespace {
struct DSLInline
    : public mlir::triton::flagtree::impl::FlagTreeDSLInlineBase<DSLInline> {
  void runOnOperation() override;
};
} // namespace

void DSLInline::runOnOperation() {}
