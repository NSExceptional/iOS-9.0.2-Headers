/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:31 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItem;

@interface CoreDAVRemoveItem : CoreDAVItem {

	CoreDAVItem* _prop;

}

@property (nonatomic,retain) CoreDAVItem * prop;              //@synthesize prop=_prop - In the implementation block
+(id)copyParseRules;
-(void)dealloc;
-(id)init;
-(id)description;
-(CoreDAVItem *)prop;
-(void)setProp:(CoreDAVItem *)arg1 ;
@end

