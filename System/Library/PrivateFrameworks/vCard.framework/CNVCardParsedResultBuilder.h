/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:42 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNVCardParsedResultBuilder <NSObject>
@required
-(BOOL)canSetValueForProperty:(id)arg1;
-(BOOL)setValues:(id)arg1 labels:(id)arg2 isPrimaries:(id)arg3 forProperty:(id)arg4;
-(BOOL)setImageData:(id)arg1 forReference:(id)arg2 clipRects:(id)arg3;
-(void)setUnknownProperties:(id)arg1;
-(id)validCountryCodes;
-(id)valueForProperty:(id)arg1;
-(id)build;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2;

@end

