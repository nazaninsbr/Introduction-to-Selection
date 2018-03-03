import pygame

pygame.init()
screen = pygame.display.set_mode((400, 300))
done = False

while not done:
		for event in pygame.event.get():
				if event.type == pygame.QUIT:
						done = True
		screen.fill((0, 250, 0))
		pygame.display.update()
		pygame.draw.rect(screen, (0, 128, 255), pygame.Rect(30, 30, 60, 60))
		pygame.display.update()