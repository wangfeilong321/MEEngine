#include "Segment.h"

Segment::Segment(osg::Vec3 start, osg::Vec3 end)
	:m_startPos(start), m_endPos(end)
{

}


Segment::~Segment()
{
}

osg::Vec3 Segment::dir()
{
	auto _dir = m_endPos - m_startPos;
	_dir.normalize();
	return _dir;
}

float Segment::length()
{
	auto _dir = dir();
	return _dir.length();
}