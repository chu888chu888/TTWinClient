/*******************************************************************************
 *  @file      IMiscModule.h 2014\8\4 9:51:53 $
 *  @author    �쵶<kuaidao@mogujie.com>
 *  @brief     
 ******************************************************************************/

#ifndef IMISCMODULE_450253C2_B143_4DD2_BD21_552FC6049D7A_H__
#define IMISCMODULE_450253C2_B143_4DD2_BD21_552FC6049D7A_H__

#include "GlobalDefine.h"
#include "TTLogic/IModule.h"
#include "Modules/ModuleDll.h"
/******************************************************************************/
class FloatInfo;
NAMESPACE_BEGIN(module)

/**
 * The class <code>һЩ�Ƚ��ӵĹ��õĽӿں���</code> 
 *
 */
class MODULE_API IMiscModule : public logic::IModule
{
public:
    /** @name Constructors and Destructor*/

    //@{
    /**
     * Constructor 
     */
	IMiscModule()
	{
		m_moduleId = MODULE_ID_MISC;
	}
    //@}

public:
	virtual CString getUsersDir() = 0;
	virtual CString getTTCommonAppdata() = 0;
	virtual CString getCurAccountDir() = 0;
	virtual CString getDownloadDir() = 0;
	virtual CString getDataDir() = 0;
	virtual CString getDefaultAvatar() = 0;
	virtual CString getUserTempDir() = 0;
	virtual CString getDumpDir() = 0;
	virtual CString getTTCommonAppdataUserDir() = 0;//��ϵͳ����Ŀ¼��
	virtual CString GetAudioFileSavedPath() = 0;
	virtual CString getEmotionFilesDir() = 0;
	virtual CString getFileRecvDir() = 0;

	/**
	 * ת������ʾ��ʱ��
	 *
	 * @param   IN UInt32 time
	 * @return  CString
	 * @exception �����ʱ����ʾΪ Сʱ������
				  ����1�����ʾΪ ����
				  ����2�����ʾΪ ��-��
				  ����1�����ʾΪ ȥ��
				  ����2�����ʾΪ Զ��
	 */
	virtual CString makeShortTimeDescription(IN UInt32 time) = 0;
	/**
	* �������õ�����
	*
	* @param   void
	* @return  void
	* @exception there is no any exception to throw.
	*/
	virtual void playSysConfigSound() = 0;	//
	/**
	* ����wav��ʽ����Ƶ�ļ�
	*
	* @param   const CString & path
	* @return  void
	* @exception there is no any exception to throw.
	*/
	virtual void playSound(const CString& path) = 0;
	virtual void floatForm(HWND parentWnd,FloatInfo floatInfo) = 0;
	/**
	 * �˳�Ӧ�ó���
	 *
	 * @return  void
	 * @exception there is no any exception to throw.
	 */	
	virtual void quitTheApplication() = 0;
	/**
	 * ��ȡӦ�ó������
	 *
	 * @return  CString
	 * @exception there is no any exception to throw.
	 */
	virtual CString getAppTitle() = 0;

	/**
	 * �첽�����������
	 *
	 * @param   const CString & strURL
	 * @param   INT nFlag
	 * @return  void
	 * @exception there is no any exception to throw.
	 */	
	virtual void asynOpenWebBrowser(CString& url, INT nFlag = SW_SHOWMAXIMIZED) = 0;
};

MODULE_API IMiscModule* getMiscModule();

NAMESPACE_END(module)
/******************************************************************************/
#endif// IMISCMODULE_450253C2_B143_4DD2_BD21_552FC6049D7A_H__