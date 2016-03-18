/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:41 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SLRequest, SUScriptAppleAccount, NSURL;

@interface SUScriptFacebookRequest : SUScriptObject {

	SLRequest* _request;
	long long _requestMethod;
	SUScriptAppleAccount* _scriptAccount;
	NSURL* _url;

}

@property (retain) SUScriptAppleAccount * account; 
@property (readonly) long long requestMethod; 
@property (copy,readonly) NSURL * URL; 
@property (readonly) long long requestMethodDelete; 
@property (readonly) long long requestMethodGet; 
@property (readonly) long long requestMethodPost; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(NSURL *)URL;
-(void)setParameters:(id)arg1 ;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)setAccount:(SUScriptAppleAccount *)arg1 ;
-(SUScriptAppleAccount *)account;
-(long long)requestMethodGet;
-(long long)requestMethodPost;
-(long long)requestMethodDelete;
-(BOOL)_isRequestAllowed:(id*)arg1 ;
-(void)_performRequest:(id)arg1 withScriptFunction:(id)arg2 ;
-(void)addMultiPartData:(id)arg1 withName:(id)arg2 type:(id)arg3 ;
-(void)addParameterWithKey:(id)arg1 value:(id)arg2 ;
-(void)performRequestWithFunction:(id)arg1 ;
-(id)initWithURL:(id)arg1 requestMethod:(id)arg2 ;
-(long long)requestMethod;
@end

