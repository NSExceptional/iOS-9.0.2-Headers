/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/VideoProcessors/GyroVideoStabilization.videoprocessor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EAGLContext;

@interface AFilter : NSObject {

	EAGLContext* _glContext;
	unsigned _lumaProgram;
	unsigned _chromaProgram;
	unsigned _bgraProgram;
	unsigned _uniforms[40];
	float m_angle;

}
-(id)initWithContext:(id)arg1 ;
-(BOOL)requiresScissor;
@end

