#include <mlx.h>


int	main(int argc , char **argv)
{
	void	*mlx;
	void	*win:

	if (argc != 2)
		exit();

	mlx = mlx_init();
	win = mlx_new_window(mlx, 1920, 1080, "Hello world!");
	mlx_loop(mlx);
}
