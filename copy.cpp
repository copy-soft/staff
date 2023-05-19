template <typename... Args>
std::unique_ptr<Widget> create(Args&&... args)
{
	auto uptr(std::make::unique<Widget>(
	std::forward<Args>(args)...));
	return std::move(uptr);
}
