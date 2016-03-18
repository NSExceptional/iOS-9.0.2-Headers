/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:24 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPAssetUploadTokenRetrieveResponse, CKDPDeleteCommentResponse, CKDPDeleteContainerResponse, CKDPGetCommentResponse, CKDPGetCommentsResponse, CKDPGetLikesResponse, CKDPLikeResponse, CKDPMescalCertificateResponse, CKDPMescalSessionInfoResponse, CKDPMescalSignatureResponse, CKDPNotificationMarkReadResponse, CKDPNotificationSyncResponse, CKDPPkiRegisterResponse, CKDPPkiRetrieveResponse, CKDPPostCommentResponse, CKDPPromoteContainerSchemaResponse, CKDPPulseResponse, CKDPQueryRetrieveResponse, CKDPRecordDeleteResponse, CKDPRecordRetrieveChangesResponse, CKDPRecordRetrieveResponse, CKDPRecordRetrieveVersionsResponse, CKDPRecordSaveResponse, CKDPResetContainerResponse, CKDPOperation, CKDPResponseOperationResult, CKDPSetBadgeCountResponse, CKDPShareAcceptResponse, CKDPShareDeleteResponse, CKDPShareRetrieveResponse, CKDPShareSaveResponse, CKDPShareTokenDeleteResponse, CKDPShareTokenRetrieveResponse, CKDPShareTokenSaveResponse, CKDPSubscriptionCreateResponse, CKDPSubscriptionDeleteResponse, CKDPSubscriptionRetrieveResponse, CKDPTokenRegistrationResponse, CKDPTokenUnregistrationResponse, CKDPUnlikeResponse, CKDPUserAvailableQuotaResponse, CKDPUserPrivacySettingsBatchLookupResponse, CKDPUserPrivacySettingsResetResponse, CKDPUserPrivacySettingsRetrieveResponse, CKDPUserPrivacySettingsUpdateResponse, CKDPUserQueryResponse, CKDPUserRetrieveResponse, CKDPWebAuthTokenRetrieveResponse, CKDPZoneDeleteResponse, CKDPZoneRetrieveChangesResponse, CKDPZoneRetrieveResponse, CKDPZoneSaveResponse;

@interface CKDPResponseOperation : PBCodable <NSCopying> {

	CKDPAssetUploadTokenRetrieveResponse* _assetUploadTokenRetrieveResponse;
	CKDPDeleteCommentResponse* _deleteCommentResponse;
	CKDPDeleteContainerResponse* _deleteContainerResponse;
	CKDPGetCommentResponse* _getCommentResponse;
	CKDPGetCommentsResponse* _getCommentsResponse;
	CKDPGetLikesResponse* _getLikesResponse;
	CKDPLikeResponse* _likeResponse;
	CKDPMescalCertificateResponse* _mescalCertificateResponse;
	CKDPMescalSessionInfoResponse* _mescalSessionInfoResponse;
	CKDPMescalSignatureResponse* _mescalSignatureResponse;
	CKDPNotificationMarkReadResponse* _notificationMarkReadResponse;
	CKDPNotificationSyncResponse* _notificationSyncResponse;
	unsigned _operationCost;
	CKDPPkiRegisterResponse* _pkiRegisterResponse;
	CKDPPkiRetrieveResponse* _pkiRetrieveResponse;
	CKDPPostCommentResponse* _postCommentResponse;
	CKDPPromoteContainerSchemaResponse* _promoteContainerSchemaResponse;
	CKDPPulseResponse* _pulseResponse;
	CKDPQueryRetrieveResponse* _queryRetrieveResponse;
	CKDPRecordDeleteResponse* _recordDeleteResponse;
	CKDPRecordRetrieveChangesResponse* _recordRetrieveChangesResponse;
	CKDPRecordRetrieveResponse* _recordRetrieveResponse;
	CKDPRecordRetrieveVersionsResponse* _recordRetrieveVersionsResponse;
	CKDPRecordSaveResponse* _recordSaveResponse;
	CKDPResetContainerResponse* _resetContainerResponse;
	CKDPOperation* _response;
	CKDPResponseOperationResult* _result;
	CKDPSetBadgeCountResponse* _setBadgeCountResponse;
	CKDPShareAcceptResponse* _shareAcceptResponse;
	CKDPShareDeleteResponse* _shareDeleteResponse;
	CKDPShareRetrieveResponse* _shareRetrieveResponse;
	CKDPShareSaveResponse* _shareSaveResponse;
	CKDPShareTokenDeleteResponse* _shareTokenDeleteResponse;
	CKDPShareTokenRetrieveResponse* _shareTokenRetrieveResponse;
	CKDPShareTokenSaveResponse* _shareTokenSaveResponse;
	CKDPSubscriptionCreateResponse* _subscriptionCreateResponse;
	CKDPSubscriptionDeleteResponse* _subscriptionDeleteResponse;
	CKDPSubscriptionRetrieveResponse* _subscriptionRetrieveResponse;
	CKDPTokenRegistrationResponse* _tokenRegistrationResponse;
	CKDPTokenUnregistrationResponse* _tokenUnregistrationResponse;
	CKDPUnlikeResponse* _unlikeResponse;
	CKDPUserAvailableQuotaResponse* _userAvailableQuotaResponse;
	CKDPUserPrivacySettingsBatchLookupResponse* _userPrivacySettingsBatchLookupResponse;
	CKDPUserPrivacySettingsResetResponse* _userPrivacySettingsResetResponse;
	CKDPUserPrivacySettingsRetrieveResponse* _userPrivacySettingsRetrieveResponse;
	CKDPUserPrivacySettingsUpdateResponse* _userPrivacySettingsUpdateResponse;
	CKDPUserQueryResponse* _userQueryResponse;
	CKDPUserRetrieveResponse* _userRetrieveResponse;
	CKDPWebAuthTokenRetrieveResponse* _webAuthTokenRetrieveResponse;
	CKDPZoneDeleteResponse* _zoneDeleteResponse;
	CKDPZoneRetrieveChangesResponse* _zoneRetrieveChangesResponse;
	CKDPZoneRetrieveResponse* _zoneRetrieveResponse;
	CKDPZoneSaveResponse* _zoneSaveResponse;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasMescalSignatureResponse; 
@property (nonatomic,retain) CKDPMescalSignatureResponse * mescalSignatureResponse; 
@property (nonatomic,readonly) BOOL hasMescalSessionInfoResponse; 
@property (nonatomic,retain) CKDPMescalSessionInfoResponse * mescalSessionInfoResponse; 
@property (nonatomic,readonly) BOOL hasMescalCertificateResponse; 
@property (nonatomic,retain) CKDPMescalCertificateResponse * mescalCertificateResponse; 
@property (nonatomic,readonly) BOOL hasPkiRetrieveResponse; 
@property (nonatomic,retain) CKDPPkiRetrieveResponse * pkiRetrieveResponse; 
@property (nonatomic,readonly) BOOL hasPkiRegisterResponse; 
@property (nonatomic,retain) CKDPPkiRegisterResponse * pkiRegisterResponse; 
@property (nonatomic,readonly) BOOL hasNotificationMarkReadResponse; 
@property (nonatomic,retain) CKDPNotificationMarkReadResponse * notificationMarkReadResponse; 
@property (nonatomic,readonly) BOOL hasNotificationSyncResponse; 
@property (nonatomic,retain) CKDPNotificationSyncResponse * notificationSyncResponse; 
@property (nonatomic,readonly) BOOL hasSetBadgeCountResponse; 
@property (nonatomic,retain) CKDPSetBadgeCountResponse * setBadgeCountResponse; 
@property (nonatomic,readonly) BOOL hasTokenUnregistrationResponse; 
@property (nonatomic,retain) CKDPTokenUnregistrationResponse * tokenUnregistrationResponse; 
@property (nonatomic,readonly) BOOL hasTokenRegistrationResponse; 
@property (nonatomic,retain) CKDPTokenRegistrationResponse * tokenRegistrationResponse; 
@property (nonatomic,readonly) BOOL hasUserPrivacySettingsRetrieveResponse; 
@property (nonatomic,retain) CKDPUserPrivacySettingsRetrieveResponse * userPrivacySettingsRetrieveResponse; 
@property (nonatomic,readonly) BOOL hasUserPrivacySettingsBatchLookupResponse; 
@property (nonatomic,retain) CKDPUserPrivacySettingsBatchLookupResponse * userPrivacySettingsBatchLookupResponse; 
@property (nonatomic,readonly) BOOL hasUserPrivacySettingsResetResponse; 
@property (nonatomic,retain) CKDPUserPrivacySettingsResetResponse * userPrivacySettingsResetResponse; 
@property (nonatomic,readonly) BOOL hasUserPrivacySettingsUpdateResponse; 
@property (nonatomic,retain) CKDPUserPrivacySettingsUpdateResponse * userPrivacySettingsUpdateResponse; 
@property (nonatomic,readonly) BOOL hasUserQueryResponse; 
@property (nonatomic,retain) CKDPUserQueryResponse * userQueryResponse; 
@property (nonatomic,readonly) BOOL hasSubscriptionDeleteResponse; 
@property (nonatomic,retain) CKDPSubscriptionDeleteResponse * subscriptionDeleteResponse; 
@property (nonatomic,readonly) BOOL hasSubscriptionRetrieveResponse; 
@property (nonatomic,retain) CKDPSubscriptionRetrieveResponse * subscriptionRetrieveResponse; 
@property (nonatomic,readonly) BOOL hasSubscriptionCreateResponse; 
@property (nonatomic,retain) CKDPSubscriptionCreateResponse * subscriptionCreateResponse; 
@property (nonatomic,readonly) BOOL hasPulseResponse; 
@property (nonatomic,retain) CKDPPulseResponse * pulseResponse; 
@property (nonatomic,readonly) BOOL hasGetLikesResponse; 
@property (nonatomic,retain) CKDPGetLikesResponse * getLikesResponse; 
@property (nonatomic,readonly) BOOL hasUnlikeResponse; 
@property (nonatomic,retain) CKDPUnlikeResponse * unlikeResponse; 
@property (nonatomic,readonly) BOOL hasLikeResponse; 
@property (nonatomic,retain) CKDPLikeResponse * likeResponse; 
@property (nonatomic,readonly) BOOL hasDeleteCommentResponse; 
@property (nonatomic,retain) CKDPDeleteCommentResponse * deleteCommentResponse; 
@property (nonatomic,readonly) BOOL hasGetCommentResponse; 
@property (nonatomic,retain) CKDPGetCommentResponse * getCommentResponse; 
@property (nonatomic,readonly) BOOL hasGetCommentsResponse; 
@property (nonatomic,retain) CKDPGetCommentsResponse * getCommentsResponse; 
@property (nonatomic,readonly) BOOL hasPostCommentResponse; 
@property (nonatomic,retain) CKDPPostCommentResponse * postCommentResponse; 
@property (nonatomic,readonly) BOOL hasWebAuthTokenRetrieveResponse; 
@property (nonatomic,retain) CKDPWebAuthTokenRetrieveResponse * webAuthTokenRetrieveResponse; 
@property (nonatomic,readonly) BOOL hasPromoteContainerSchemaResponse; 
@property (nonatomic,retain) CKDPPromoteContainerSchemaResponse * promoteContainerSchemaResponse; 
@property (nonatomic,readonly) BOOL hasResetContainerResponse; 
@property (nonatomic,retain) CKDPResetContainerResponse * resetContainerResponse; 
@property (nonatomic,readonly) BOOL hasDeleteContainerResponse; 
@property (nonatomic,retain) CKDPDeleteContainerResponse * deleteContainerResponse; 
@property (nonatomic,readonly) BOOL hasAssetUploadTokenRetrieveResponse; 
@property (nonatomic,retain) CKDPAssetUploadTokenRetrieveResponse * assetUploadTokenRetrieveResponse; 
@property (nonatomic,readonly) BOOL hasQueryRetrieveResponse; 
@property (nonatomic,retain) CKDPQueryRetrieveResponse * queryRetrieveResponse; 
@property (nonatomic,readonly) BOOL hasUserRetrieveResponse; 
@property (nonatomic,retain) CKDPUserRetrieveResponse * userRetrieveResponse; 
@property (nonatomic,readonly) BOOL hasUserAvailableQuotaResponse; 
@property (nonatomic,retain) CKDPUserAvailableQuotaResponse * userAvailableQuotaResponse; 
@property (nonatomic,readonly) BOOL hasRecordDeleteResponse; 
@property (nonatomic,retain) CKDPRecordDeleteResponse * recordDeleteResponse; 
@property (nonatomic,readonly) BOOL hasRecordRetrieveChangesResponse; 
@property (nonatomic,retain) CKDPRecordRetrieveChangesResponse * recordRetrieveChangesResponse; 
@property (nonatomic,readonly) BOOL hasRecordRetrieveVersionsResponse; 
@property (nonatomic,retain) CKDPRecordRetrieveVersionsResponse * recordRetrieveVersionsResponse; 
@property (nonatomic,readonly) BOOL hasRecordRetrieveResponse; 
@property (nonatomic,retain) CKDPRecordRetrieveResponse * recordRetrieveResponse; 
@property (nonatomic,readonly) BOOL hasRecordSaveResponse; 
@property (nonatomic,retain) CKDPRecordSaveResponse * recordSaveResponse; 
@property (nonatomic,readonly) BOOL hasZoneRetrieveChangesResponse; 
@property (nonatomic,retain) CKDPZoneRetrieveChangesResponse * zoneRetrieveChangesResponse; 
@property (nonatomic,readonly) BOOL hasZoneDeleteResponse; 
@property (nonatomic,retain) CKDPZoneDeleteResponse * zoneDeleteResponse; 
@property (nonatomic,readonly) BOOL hasZoneRetrieveResponse; 
@property (nonatomic,retain) CKDPZoneRetrieveResponse * zoneRetrieveResponse; 
@property (nonatomic,readonly) BOOL hasZoneSaveResponse; 
@property (nonatomic,retain) CKDPZoneSaveResponse * zoneSaveResponse; 
@property (nonatomic,readonly) BOOL hasShareTokenDeleteResponse; 
@property (nonatomic,retain) CKDPShareTokenDeleteResponse * shareTokenDeleteResponse; 
@property (nonatomic,readonly) BOOL hasShareTokenRetrieveResponse; 
@property (nonatomic,retain) CKDPShareTokenRetrieveResponse * shareTokenRetrieveResponse; 
@property (nonatomic,readonly) BOOL hasShareTokenSaveResponse; 
@property (nonatomic,retain) CKDPShareTokenSaveResponse * shareTokenSaveResponse; 
@property (nonatomic,readonly) BOOL hasShareAcceptResponse; 
@property (nonatomic,retain) CKDPShareAcceptResponse * shareAcceptResponse; 
@property (nonatomic,readonly) BOOL hasShareDeleteResponse; 
@property (nonatomic,retain) CKDPShareDeleteResponse * shareDeleteResponse; 
@property (nonatomic,readonly) BOOL hasShareRetrieveResponse; 
@property (nonatomic,retain) CKDPShareRetrieveResponse * shareRetrieveResponse; 
@property (nonatomic,readonly) BOOL hasShareSaveResponse; 
@property (nonatomic,retain) CKDPShareSaveResponse * shareSaveResponse; 
@property (assign,nonatomic) BOOL hasOperationCost; 
@property (assign,nonatomic) unsigned operationCost;                                                                           //@synthesize operationCost=_operationCost - In the implementation block
@property (nonatomic,readonly) BOOL hasResponse; 
@property (nonatomic,retain) CKDPOperation * response;                                                                         //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) BOOL hasResult; 
@property (nonatomic,retain) CKDPResponseOperationResult * result;                                                             //@synthesize result=_result - In the implementation block
-(BOOL)hasMescalSignatureResponse;
-(CKDPMescalSignatureResponse *)mescalSignatureResponse;
-(void)setMescalSignatureResponse:(CKDPMescalSignatureResponse *)arg1 ;
-(void)setMescalSessionInfoResponse:(CKDPMescalSessionInfoResponse *)arg1 ;
-(void)setMescalCertificateResponse:(CKDPMescalCertificateResponse *)arg1 ;
-(BOOL)hasMescalSessionInfoResponse;
-(CKDPMescalSessionInfoResponse *)mescalSessionInfoResponse;
-(BOOL)hasMescalCertificateResponse;
-(CKDPMescalCertificateResponse *)mescalCertificateResponse;
-(void)setPkiRetrieveResponse:(CKDPPkiRetrieveResponse *)arg1 ;
-(BOOL)hasPkiRetrieveResponse;
-(CKDPPkiRetrieveResponse *)pkiRetrieveResponse;
-(void)setPkiRegisterResponse:(CKDPPkiRegisterResponse *)arg1 ;
-(BOOL)hasPkiRegisterResponse;
-(CKDPPkiRegisterResponse *)pkiRegisterResponse;
-(void)setNotificationMarkReadResponse:(CKDPNotificationMarkReadResponse *)arg1 ;
-(BOOL)hasNotificationMarkReadResponse;
-(CKDPNotificationMarkReadResponse *)notificationMarkReadResponse;
-(void)setNotificationSyncResponse:(CKDPNotificationSyncResponse *)arg1 ;
-(BOOL)hasNotificationSyncResponse;
-(CKDPNotificationSyncResponse *)notificationSyncResponse;
-(void)setSetBadgeCountResponse:(CKDPSetBadgeCountResponse *)arg1 ;
-(BOOL)hasSetBadgeCountResponse;
-(CKDPSetBadgeCountResponse *)setBadgeCountResponse;
-(void)setTokenUnregistrationResponse:(CKDPTokenUnregistrationResponse *)arg1 ;
-(BOOL)hasTokenUnregistrationResponse;
-(CKDPTokenUnregistrationResponse *)tokenUnregistrationResponse;
-(void)setTokenRegistrationResponse:(CKDPTokenRegistrationResponse *)arg1 ;
-(BOOL)hasTokenRegistrationResponse;
-(CKDPTokenRegistrationResponse *)tokenRegistrationResponse;
-(void)setUserPrivacySettingsRetrieveResponse:(CKDPUserPrivacySettingsRetrieveResponse *)arg1 ;
-(BOOL)hasUserPrivacySettingsRetrieveResponse;
-(CKDPUserPrivacySettingsRetrieveResponse *)userPrivacySettingsRetrieveResponse;
-(void)setUserPrivacySettingsBatchLookupResponse:(CKDPUserPrivacySettingsBatchLookupResponse *)arg1 ;
-(BOOL)hasUserPrivacySettingsBatchLookupResponse;
-(CKDPUserPrivacySettingsBatchLookupResponse *)userPrivacySettingsBatchLookupResponse;
-(void)setUserPrivacySettingsResetResponse:(CKDPUserPrivacySettingsResetResponse *)arg1 ;
-(BOOL)hasUserPrivacySettingsResetResponse;
-(CKDPUserPrivacySettingsResetResponse *)userPrivacySettingsResetResponse;
-(void)setUserPrivacySettingsUpdateResponse:(CKDPUserPrivacySettingsUpdateResponse *)arg1 ;
-(BOOL)hasUserPrivacySettingsUpdateResponse;
-(CKDPUserPrivacySettingsUpdateResponse *)userPrivacySettingsUpdateResponse;
-(void)setUserQueryResponse:(CKDPUserQueryResponse *)arg1 ;
-(BOOL)hasUserQueryResponse;
-(CKDPUserQueryResponse *)userQueryResponse;
-(void)setSubscriptionDeleteResponse:(CKDPSubscriptionDeleteResponse *)arg1 ;
-(BOOL)hasSubscriptionDeleteResponse;
-(CKDPSubscriptionDeleteResponse *)subscriptionDeleteResponse;
-(void)setSubscriptionRetrieveResponse:(CKDPSubscriptionRetrieveResponse *)arg1 ;
-(BOOL)hasSubscriptionRetrieveResponse;
-(CKDPSubscriptionRetrieveResponse *)subscriptionRetrieveResponse;
-(void)setSubscriptionCreateResponse:(CKDPSubscriptionCreateResponse *)arg1 ;
-(BOOL)hasSubscriptionCreateResponse;
-(CKDPSubscriptionCreateResponse *)subscriptionCreateResponse;
-(void)setPulseResponse:(CKDPPulseResponse *)arg1 ;
-(BOOL)hasPulseResponse;
-(CKDPPulseResponse *)pulseResponse;
-(void)setGetLikesResponse:(CKDPGetLikesResponse *)arg1 ;
-(BOOL)hasGetLikesResponse;
-(CKDPGetLikesResponse *)getLikesResponse;
-(void)setUnlikeResponse:(CKDPUnlikeResponse *)arg1 ;
-(BOOL)hasUnlikeResponse;
-(CKDPUnlikeResponse *)unlikeResponse;
-(void)setLikeResponse:(CKDPLikeResponse *)arg1 ;
-(BOOL)hasLikeResponse;
-(CKDPLikeResponse *)likeResponse;
-(void)setDeleteCommentResponse:(CKDPDeleteCommentResponse *)arg1 ;
-(BOOL)hasDeleteCommentResponse;
-(CKDPDeleteCommentResponse *)deleteCommentResponse;
-(void)setGetCommentResponse:(CKDPGetCommentResponse *)arg1 ;
-(BOOL)hasGetCommentResponse;
-(CKDPGetCommentResponse *)getCommentResponse;
-(void)setGetCommentsResponse:(CKDPGetCommentsResponse *)arg1 ;
-(BOOL)hasGetCommentsResponse;
-(CKDPGetCommentsResponse *)getCommentsResponse;
-(void)setPostCommentResponse:(CKDPPostCommentResponse *)arg1 ;
-(BOOL)hasPostCommentResponse;
-(CKDPPostCommentResponse *)postCommentResponse;
-(void)setWebAuthTokenRetrieveResponse:(CKDPWebAuthTokenRetrieveResponse *)arg1 ;
-(BOOL)hasWebAuthTokenRetrieveResponse;
-(CKDPWebAuthTokenRetrieveResponse *)webAuthTokenRetrieveResponse;
-(void)setPromoteContainerSchemaResponse:(CKDPPromoteContainerSchemaResponse *)arg1 ;
-(BOOL)hasPromoteContainerSchemaResponse;
-(CKDPPromoteContainerSchemaResponse *)promoteContainerSchemaResponse;
-(void)setResetContainerResponse:(CKDPResetContainerResponse *)arg1 ;
-(BOOL)hasResetContainerResponse;
-(CKDPResetContainerResponse *)resetContainerResponse;
-(void)setDeleteContainerResponse:(CKDPDeleteContainerResponse *)arg1 ;
-(BOOL)hasDeleteContainerResponse;
-(CKDPDeleteContainerResponse *)deleteContainerResponse;
-(void)setAssetUploadTokenRetrieveResponse:(CKDPAssetUploadTokenRetrieveResponse *)arg1 ;
-(BOOL)hasAssetUploadTokenRetrieveResponse;
-(CKDPAssetUploadTokenRetrieveResponse *)assetUploadTokenRetrieveResponse;
-(BOOL)hasQueryRetrieveResponse;
-(CKDPQueryRetrieveResponse *)queryRetrieveResponse;
-(void)setQueryRetrieveResponse:(CKDPQueryRetrieveResponse *)arg1 ;
-(void)setUserRetrieveResponse:(CKDPUserRetrieveResponse *)arg1 ;
-(BOOL)hasUserRetrieveResponse;
-(CKDPUserRetrieveResponse *)userRetrieveResponse;
-(void)setUserAvailableQuotaResponse:(CKDPUserAvailableQuotaResponse *)arg1 ;
-(BOOL)hasUserAvailableQuotaResponse;
-(CKDPUserAvailableQuotaResponse *)userAvailableQuotaResponse;
-(void)setRecordDeleteResponse:(CKDPRecordDeleteResponse *)arg1 ;
-(BOOL)hasRecordDeleteResponse;
-(CKDPRecordDeleteResponse *)recordDeleteResponse;
-(void)setRecordRetrieveChangesResponse:(CKDPRecordRetrieveChangesResponse *)arg1 ;
-(BOOL)hasRecordRetrieveChangesResponse;
-(CKDPRecordRetrieveChangesResponse *)recordRetrieveChangesResponse;
-(void)setRecordRetrieveVersionsResponse:(CKDPRecordRetrieveVersionsResponse *)arg1 ;
-(BOOL)hasRecordRetrieveVersionsResponse;
-(CKDPRecordRetrieveVersionsResponse *)recordRetrieveVersionsResponse;
-(void)setRecordRetrieveResponse:(CKDPRecordRetrieveResponse *)arg1 ;
-(BOOL)hasRecordRetrieveResponse;
-(CKDPRecordRetrieveResponse *)recordRetrieveResponse;
-(void)setRecordSaveResponse:(CKDPRecordSaveResponse *)arg1 ;
-(BOOL)hasRecordSaveResponse;
-(CKDPRecordSaveResponse *)recordSaveResponse;
-(void)setZoneRetrieveChangesResponse:(CKDPZoneRetrieveChangesResponse *)arg1 ;
-(BOOL)hasZoneRetrieveChangesResponse;
-(CKDPZoneRetrieveChangesResponse *)zoneRetrieveChangesResponse;
-(void)setZoneDeleteResponse:(CKDPZoneDeleteResponse *)arg1 ;
-(BOOL)hasZoneDeleteResponse;
-(CKDPZoneDeleteResponse *)zoneDeleteResponse;
-(void)setZoneRetrieveResponse:(CKDPZoneRetrieveResponse *)arg1 ;
-(BOOL)hasZoneRetrieveResponse;
-(CKDPZoneRetrieveResponse *)zoneRetrieveResponse;
-(void)setZoneSaveResponse:(CKDPZoneSaveResponse *)arg1 ;
-(BOOL)hasZoneSaveResponse;
-(CKDPZoneSaveResponse *)zoneSaveResponse;
-(void)setShareTokenDeleteResponse:(CKDPShareTokenDeleteResponse *)arg1 ;
-(BOOL)hasShareTokenDeleteResponse;
-(CKDPShareTokenDeleteResponse *)shareTokenDeleteResponse;
-(void)setShareTokenRetrieveResponse:(CKDPShareTokenRetrieveResponse *)arg1 ;
-(BOOL)hasShareTokenRetrieveResponse;
-(CKDPShareTokenRetrieveResponse *)shareTokenRetrieveResponse;
-(void)setShareTokenSaveResponse:(CKDPShareTokenSaveResponse *)arg1 ;
-(BOOL)hasShareTokenSaveResponse;
-(CKDPShareTokenSaveResponse *)shareTokenSaveResponse;
-(void)setShareAcceptResponse:(CKDPShareAcceptResponse *)arg1 ;
-(BOOL)hasShareAcceptResponse;
-(CKDPShareAcceptResponse *)shareAcceptResponse;
-(void)setShareDeleteResponse:(CKDPShareDeleteResponse *)arg1 ;
-(BOOL)hasShareDeleteResponse;
-(CKDPShareDeleteResponse *)shareDeleteResponse;
-(BOOL)hasShareRetrieveResponse;
-(CKDPShareRetrieveResponse *)shareRetrieveResponse;
-(void)setShareRetrieveResponse:(CKDPShareRetrieveResponse *)arg1 ;
-(void)setShareSaveResponse:(CKDPShareSaveResponse *)arg1 ;
-(BOOL)hasShareSaveResponse;
-(CKDPShareSaveResponse *)shareSaveResponse;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CKDPOperation *)response;
-(id)dictionaryRepresentation;
-(CKDPResponseOperationResult *)result;
-(BOOL)hasOperationCost;
-(unsigned)operationCost;
-(void)setOperationCost:(unsigned)arg1 ;
-(void)setHasOperationCost:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasResponse;
-(void)setResponse:(CKDPOperation *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setResult:(CKDPResponseOperationResult *)arg1 ;
-(BOOL)hasResult;
@end

