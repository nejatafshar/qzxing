#ifndef BLOCKPAIR_H
#define BLOCKPAIR_H

#include <vector>
#include <zxing/common/Array.h>

using namespace std;

namespace zxing {
namespace qrcode {

class BlockPair
{
private:
    ArrayRef<Byte> data_;
    ArrayRef<Byte> errorCorrection_;

public:
    BlockPair(ArrayRef<Byte> data, ArrayRef<Byte> errorCorrection) :
      data_(data), errorCorrection_(errorCorrection)  {}

    BlockPair(const BlockPair& other) : data_(other.data_), errorCorrection_(other.errorCorrection_) {}

    ArrayRef<Byte> getDataBytes() { return data_; }

    ArrayRef<Byte> getErrorCorrectionBytes() { return errorCorrection_; }
};

}
}

#endif //BLOCKPAIR_H
