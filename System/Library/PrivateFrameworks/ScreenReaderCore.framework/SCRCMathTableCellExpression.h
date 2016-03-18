/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:05 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathRowExpression.h>

@interface SCRCMathTableCellExpression : SCRCMathRowExpression {

	BOOL _didGetTablePosition;
	unsigned long long _rowIndex;
	unsigned long long _columnIndex;
	unsigned long long _tableRowCount;
	unsigned long long _tableColumnCount;

}
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 ;
-(id)mathMLTag;
-(id)prefixForChildAtIndex:(unsigned long long)arg1 ;
-(id)suffixForChildAtIndex:(unsigned long long)arg1 ;
-(void)_getTableDataIfNecessary;
-(id)_prefixForCell;
-(id)_suffixForCell;
@end

