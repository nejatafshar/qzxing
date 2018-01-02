#ifndef BYTEMATRIX_H
#define BYTEMATRIX_H

#include <vector>
#include <string>
#include <zxing/common/Counted.h>
#include <zxing/common/Types.h>

namespace zxing {
namespace qrcode {

class ByteMatrix : public Counted
{
private:
  std::vector< std::vector<Byte> > bytes_;
  size_t width_;
  size_t height_;

public:

  ByteMatrix(size_t width, size_t height);

  size_t getHeight() const;
  size_t getWidth() const;
  Byte get(size_t x, size_t y) const;

  std::vector<std::vector<Byte> > getArray() const;
  void set(size_t x, size_t y, const Byte value);
  void set(size_t x, size_t y, size_t value);
  void set(size_t x, size_t y, bool value);
  void clear(const Byte value);
  const std::string toString() const;

};

}
}

#endif //BYTEMATRIX_H
