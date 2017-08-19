#ifndef _INCLUDE_NXS_CHAT_SRV_C_TLGRM_H
#define _INCLUDE_NXS_CHAT_SRV_C_TLGRM_H

// clang-format off

/* Prototypes */

void					nxs_chat_srv_c_tlgrm_update_init		(nxs_chat_srv_m_tlgrm_update_t *update);
void					nxs_chat_srv_c_tlgrm_update_free		(nxs_chat_srv_m_tlgrm_update_t *update);

void					nxs_chat_srv_c_tlgrm_message_init		(nxs_chat_srv_m_tlgrm_message_t *message);
void					nxs_chat_srv_c_tlgrm_message_free		(nxs_chat_srv_m_tlgrm_message_t *message);
nxs_chat_srv_m_tlgrm_message_t		*nxs_chat_srv_c_tlgrm_message_reply_alloc	(void);
nxs_chat_srv_m_tlgrm_message_t		*nxs_chat_srv_c_tlgrm_message_reply_destroy	(nxs_chat_srv_m_tlgrm_message_t *message);

void					nxs_chat_srv_c_tlgrm_chat_init			(nxs_chat_srv_m_tlgrm_chat_t *chat);
void					nxs_chat_srv_c_tlgrm_chat_free			(nxs_chat_srv_m_tlgrm_chat_t *chat);
nxs_chat_srv_m_tlgrm_chat_type_t	nxs_chat_srv_c_tlgrm_chat_type_map		(nxs_string_t *type_name);

void					nxs_chat_srv_c_tlgrm_user_init			(nxs_chat_srv_m_tlgrm_user_t *user);
void					nxs_chat_srv_c_tlgrm_user_free			(nxs_chat_srv_m_tlgrm_user_t *user);


#endif /* _INCLUDE_NXS_CHAT_SRV_C_TLGRM_H */