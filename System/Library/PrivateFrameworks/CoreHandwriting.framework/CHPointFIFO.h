/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:34 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CHPointFIFO : NSObject {

	CHPointFIFO* _nextFIFO;

}

@property (nonatomic,retain) CHPointFIFO * nextFIFO;              //@synthesize nextFIFO=_nextFIFO - In the implementation block
-(void)dealloc;
-(void)flush;
-(void)addPoint:;
-(void)clear;
-(id)initWithFIFO:(id)arg1 ;
-(void)setNextFIFO:(CHPointFIFO *)arg1 ;
-(CHPointFIFO *)nextFIFO;
-(void)emitPoint:;
@end

