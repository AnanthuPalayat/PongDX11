#define pressed(b) (input->buttons[b].is_down && input->buttons[b].changed)
#define released(b) (!input->buttons[b].is_down && input->buttons[b].changed)
#define is_down(b) input->buttons[b].is_down


float player_position_x=0.f;
float player_position_y=0.f;
internal void
simulate_game(Input *input,float dt) {
	clear_screen(0x000000);
	float speed = 50.f;//units per second
	if (is_down(BUTTON_UP)) {
		player_position_y += speed * dt;
	}if (is_down(BUTTON_DOWN)) {
		player_position_y -= speed * dt;
	}if (is_down(BUTTON_RIGHT)) {
		player_position_x += speed * dt;
	}if (is_down(BUTTON_LEFT)) {
		player_position_x -= speed * dt;
	}

	draw_rect(player_position_x, player_position_y, 1, 1, 0xB0C4DE);
	draw_rect(30, 30, 5, 5, 0xB0C4DE);
	draw_rect(-20, -20, 8, 3, 0xB0C4DE);
}