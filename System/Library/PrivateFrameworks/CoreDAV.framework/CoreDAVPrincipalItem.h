/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:31 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVHrefItem, CoreDAVItemWithNoChildren, CoreDAVItem;

@interface CoreDAVPrincipalItem : CoreDAVItem {

	CoreDAVHrefItem* _href;
	CoreDAVItemWithNoChildren* _all;
	CoreDAVItemWithNoChildren* _authenticated;
	CoreDAVItemWithNoChildren* _unauthenticated;
	CoreDAVItem* _property;
	CoreDAVItemWithNoChildren* _selfItem;

}

@property (nonatomic,retain) CoreDAVHrefItem * href;                                   //@synthesize href=_href - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * all;                          //@synthesize all=_all - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * authenticated;                //@synthesize authenticated=_authenticated - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * unauthenticated;              //@synthesize unauthenticated=_unauthenticated - In the implementation block
@property (nonatomic,retain) CoreDAVItem * property;                                   //@synthesize property=_property - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * selfItem;                     //@synthesize selfItem=_selfItem - In the implementation block
+(id)copyParseRules;
-(void)setProperty:(CoreDAVItem *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(CoreDAVHrefItem *)href;
-(void)setHref:(CoreDAVHrefItem *)arg1 ;
-(id)hashString;
-(CoreDAVItemWithNoChildren *)unauthenticated;
-(id)initTypeIsHREFWithURL:(id)arg1 ;
-(void)write:(id)arg1 ;
-(void)setAll:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setUnauthenticated:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setSelfItem:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)all;
-(CoreDAVItemWithNoChildren *)authenticated;
-(CoreDAVItemWithNoChildren *)selfItem;
-(id)initTypeIsAll;
-(id)initTypeIsProperty:(id)arg1 ;
-(id)initTypeIsAuthenticated;
-(id)initTypeIsUnauthenticated;
-(id)initTypeIsSelf;
-(void)setAuthenticated:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItem *)property;
@end

