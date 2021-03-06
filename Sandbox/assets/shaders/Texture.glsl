#type vertex
#version 330 core

layout(location = 0) in vec3 a_Position;
layout(location = 1) in vec4 a_Color;
layout(location = 2) in vec2 a_TextureCoords;

uniform mat4 u_ViewProjection;

out vec4 v_Color;
out vec2 v_TextureCoords;


void main()
{
	v_TextureCoords = a_TextureCoords;
	v_Color = a_Color;
	gl_Position = u_ViewProjection * vec4(a_Position, 1.0);
}

#type fragment
#version 330 core

layout(location = 0) out vec4 color;
in vec2 v_TextureCoords;
in vec4 v_Color;
uniform sampler2D u_Texture;	
uniform float u_Size;	
uniform vec4 u_Color;

void main()
{
	//color = texture(u_Texture, v_TextureCoords * u_Size) * u_Color;
	color = v_Color;
}
