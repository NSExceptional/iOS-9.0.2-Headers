/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:24 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileContainerManager.framework/MobileContainerManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileContainerManager/MobileContainerManager-Structs.h>
@class NSString, NSUUID, NSURL, NSDictionary;

@interface MCMContainer : NSObject {

	NSString* _identifier;
	NSUUID* _uuid;
	long long _containerClass;
	container_objectRef _thisContainer;

}

@property (nonatomic,readonly) NSUUID * uuid; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSDictionary * info; 
@property (nonatomic,readonly) long long containerClass; 
@property (getter=isTemporary,nonatomic,readonly) BOOL temporary; 
+(id)containerWithIdentifier:(id)arg1 createIfNecessary:(BOOL)arg2 existed:(BOOL*)arg3 error:(id*)arg4 ;
+(id)temporaryContainerWithIdentifier:(id)arg1 existed:(BOOL*)arg2 error:(id*)arg3 ;
+(id)containerWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 uuid:(id)arg2 containerClass:(long long)arg3 error:(id*)arg4 ;
-(container_objectRef)getLowLevelContainerObject;
-(void)markDeleted;
-(long long)_getContainerClass;
-(void)_errorOccurred;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(NSURL *)url;
-(NSDictionary *)info;
-(NSUUID *)uuid;
-(long long)containerClass;
-(BOOL)isTemporary;
-(id)initWithIdentifier:(id)arg1 createIfNecessary:(BOOL)arg2 existed:(BOOL*)arg3 temp:(BOOL)arg4 error:(id*)arg5 ;
-(id)destroyContainerWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)recreateDefaultStructureWithError:(id*)arg1 ;
-(id)infoValueForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)setInfoValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)regenerateDirectoryUUIDWithError:(id*)arg1 ;
@end

