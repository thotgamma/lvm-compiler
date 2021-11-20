#include <lvmx.h>
void pencol_hsv(float h, float s, float v) {
	h = h%360.00f;
	int index = (int)h/60;
	float f = h/60.0f - (float)index;
	float m = v*(1.0f-s);
	float n = v*(1.0f-s*f);
	float k = v*(1.0f-s*(1.0f-f));

	float r = 0;
	float g = 0;
	float b = 0;

	if (index == 0) {
		r = v; g = k; b = m;
	} else if (index == 1) {
		r = n; g = v; b = m;
	} else if (index == 2) {
		r = m; g = v; b = k;
	} else if (index == 3) {
		r = m; g = n; b = v;
	} else if (index == 4) {
		r = k; g = m; b = v;
	} else if (index == 5) {
		r = v; g = m; b = n;
	}

	writereg(17, r);
	writereg(18, g);
	writereg(19, b);
	writereg(20, 1.00f);
}

void main() {
	int loopitr = 0;
	pencol_hsv(0.0f, 1.0f, 1.0f);
	for (loopitr = 0; loopitr < 360; ++loopitr) {
		writereg(16, 1); // pen down
		pencol_hsv((float)(loopitr), 1.00f, 1.00f);
		writereg(8, 0.01f); // forward
		writereg(10, 1.00f); // rotate Y
		writereg(16, 0); // pen up
	}
}
