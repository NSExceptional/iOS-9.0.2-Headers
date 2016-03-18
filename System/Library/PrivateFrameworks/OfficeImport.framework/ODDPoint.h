/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:37 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ODDPointPropertySet, OADShapeProperties, OADTextBody;

@interface ODDPoint : NSObject {

	int mType;
	ODDPointPropertySet* mPropertySet;
	OADShapeProperties* mShapeProperties;
	OADTextBody* mText;

}
+(void)addConnectionToPoint:(id)arg1 order:(unsigned long long)arg2 array:(id*)arg3 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)shapeProperties;
-(id)propertySet;
@end

