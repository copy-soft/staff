//#include <stdlib.h>
#include <stdio.h>

#include <GL/glut.h>

#include <assimp/cimport.h>
#include <assimp/scene.h>
#include <assimp/postprocess.h>

#include <assimp/Importer.hpp>  //OO version Header!
#include <assimp/DefaultLogger.hpp>
#include <assimp/LogStream.hpp>

const aiScene* scene = NULL;
Assimp::Importer importer;
//const struct aiMesh* mesh = scene->mMeshes[0];
//nst struct aiFace* face = &scene->mMeshes[0]->mFaces[0];

GLfloat LightAmbient[]= { 0.5f, 0.5f, 0.5f, 1.0f };
GLfloat LightDiffuse[]= { 1.0f, 1.0f, 1.0f, 1.0f };
GLfloat LightPosition[]= { 0.0f, 0.0f, 15.0f, 1.0f };


double rotation_y=0, rotation_y_increment=0.0005;




void  display(void)
{
    unsigned int n=0, i;
    const struct aiFace* face = &scene->mMeshes[0]->mFaces[0];

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0,1.0,1.0);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);    // Uses default lighting parameters
    glLightModeli(GL_LIGHT_MODEL_TWO_SIDE, GL_TRUE);
    glEnable(GL_NORMALIZE);
    glLightfv(GL_LIGHT1, GL_AMBIENT, LightAmbient);
    glLightfv(GL_LIGHT1, GL_DIFFUSE, LightDiffuse);
    glLightfv(GL_LIGHT1, GL_POSITION, LightPosition);
    glEnable(GL_LIGHT1);

     rotation_y = rotation_y + rotation_y_increment;

	         if (rotation_y > 359) rotation_y = 0;

			    glRotatef(rotation_y,0.0,1.0,0.0);





    glBegin(GL_TRIANGLES);

    for(i = 0; i < scene->mMeshes[0]->mNumFaces; i++) 
    {
    const struct aiFace* face = &scene->mMeshes[0]->mFaces[i];
     glVertex3f(scene->mMeshes[0]->mVertices[face->mIndices[0]].x/200, scene->mMeshes[0]->mVertices[face->mIndices[0]].y/200, scene->mMeshes[0]->mVertices[face->mIndices[0]].z/200);
     glVertex3f(scene->mMeshes[0]->mVertices[face->mIndices[1]].x/200, scene->mMeshes[0]->mVertices[face->mIndices[1]].y/200, scene->mMeshes[0]->mVertices[face->mIndices[1]].z/200);
     glVertex3f(scene->mMeshes[0]->mVertices[face->mIndices[2]].x/200, scene->mMeshes[0]->mVertices[face->mIndices[2]].y/200, scene->mMeshes[0]->mVertices[face->mIndices[2]].z/200);

    
    
    
    }
   
    glEnd();
    glFlush();
    glutSwapBuffers();
}

int main(int argc, char **argv)
{
glutInitWindowSize(900,600);
glutInitWindowPosition(100,100);
glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA);
glutInit(&argc, argv);
glutCreateWindow("Assimp - OpenGL Sample on Linux");
glutDisplayFunc(display);
glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
scene = importer.ReadFile( argv[1], aiProcessPreset_TargetRealtime_Quality);
glutIdleFunc(display);
glutMainLoop();


}

