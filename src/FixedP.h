#include <cinttypes>
#include <algorithm>

namespace FixedP
{
	template <
		size_t integral_bytes,
		size_t floating_bytes
	> class OfSize
	{
		char integral[integral_bytes] = { 0 };
		char floating[floating_bytes] = { 0 };
		const size_t integral_size = integral_bytes;
		const size_t floating_size = floating_bytes;

		public:
			inline constexpr OfSize(uint64_t int_init, uint64_t float_init)
			{
				for (unsigned char i = 0; i < std::min(integral_size, 4); i++)
				{
					integral[i] = ((char*) &int_init)[i];
				}

				for (unsigned char i = 0; i < std::min(floating_size, 4); i++)
				{
					floating[i] = ((char*) &float_init)[i];
				}
			}
	};
}