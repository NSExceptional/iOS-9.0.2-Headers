/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:33 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CMDiagramNodeInfo : NSObject {

	int mTreeDepth;
	int mRow;
	ODIHRange mXRange;
	BOOL mConnectToVerticalSide;
	int mExtraRowsBetweenParentAndSelf;
	float mXOffsetRelativeToParent;
	ODIHRangeVector* mXRanges;

}
-(void)dealloc;
-(id)init;
-(int)row;
-(ODIHRange)xRange;
-(void)setXRange:(ODIHRange)arg1 ;
-(int)treeDepth;
-(void)setTreeDepth:(int)arg1 ;
-(void)setRow:(int)arg1 ;
-(BOOL)connectToVerticalSide;
-(void)setConnectToVerticalSide:(BOOL)arg1 ;
-(int)extraRowsBetweenParentAndSelf;
-(void)setExtraRowsBetweenParentAndSelf:(int)arg1 ;
-(float)xOffsetRelativeToParent;
-(void)setXOffsetRelativeToParent:(float)arg1 ;
-(void)addToXOffsetRelativeToParent:(float)arg1 ;
-(ODIHRangeVector*)xRanges;
@end

